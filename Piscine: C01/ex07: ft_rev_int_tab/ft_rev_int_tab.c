/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:15:11 by hleong            #+#    #+#             */
/*   Updated: 2022/08/25 15:31:49 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*p1;
	int	*p2;

	p1 = tab;
	p2 = (tab + size - 1);
	while (p1 < p2)
	{
		swap(p1, p2);
		p1++;
		p2--;
	}
}
