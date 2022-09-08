/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 00:14:10 by hleong            #+#    #+#             */
/*   Updated: 2022/09/04 15:48:07 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(str);
	if (str[i] == 0 || j == 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] <= 32 || str[i] == 127)
			return (0);
		k = i + 1;
		while (k < j)
		{
			if (str[i] == str[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;
	int	no_error;

	l = ft_strlen(base);
	no_error = ft_checkbase(base);
	if (no_error == 1)
	{
		if (nbr == -2147483648)
			write(1, "2147483648", 1);
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr < l)
			ft_putchar(base[nbr]);
		if (nbr >= l)
		{
			ft_putnbr_base(nbr / l, base);
			ft_putnbr_base(nbr % l, base);
		}
	}
}
