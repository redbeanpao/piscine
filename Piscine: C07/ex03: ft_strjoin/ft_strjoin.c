/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 01:10:11 by hleong            #+#    #+#             */
/*   Updated: 2022/12/08 23:40:34 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		counter;

	dest = (char *)malloc(sizeof(strs));
	if (!(strs))
		return (NULL);
	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[counter++] = strs[i][j++];
		j = 0;
		while (sep[j] != 0 && i != size - 1)
			dest[counter++] = sep[j++];
		i++;
	}
	dest[counter] = 0;
	return (dest);
}
