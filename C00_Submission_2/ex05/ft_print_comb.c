/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:19:05 by hleong            #+#    #+#             */
/*   Updated: 2022/08/23 21:10:23 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x, char y)
{
	write (1, &x, 1);
	write (1, &y, 1);
}

void	ft_printchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{				
				ft_printchar (a, b, c);
				if (! (a == '7' && b == '8' && c == '9'))
					ft_putchar(',', ' ');
				c++;
			}
			b++;
		}
		a++;
	}
}
