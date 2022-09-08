/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:39:25 by hleong            #+#    #+#             */
/*   Updated: 2022/08/23 21:11:42 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	printnumber(int a)
{
	int	n1;
	int	n2;

	n1 = a / 10 + '0';
	n2 = a % 10 + '0';
	write (1, &n1, 1);
	write (1, &n2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			printnumber(a);
			ft_putchar(' ');
			printnumber(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
