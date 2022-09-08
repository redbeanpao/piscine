/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:10:33 by hleong            #+#    #+#             */
/*   Updated: 2022/09/08 18:50:38 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*tab;
	int	size;

	min = 1;
	max = 10;
	i = 0;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d"" ", tab[i]);
		i++;
	}
}
