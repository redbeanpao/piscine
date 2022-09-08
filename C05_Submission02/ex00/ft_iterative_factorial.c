/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:00:52 by hleong            #+#    #+#             */
/*   Updated: 2022/09/04 14:32:00 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			i *= nb;
			nb--;
		}
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
	return (i);
}
