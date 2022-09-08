/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 02:12:53 by hleong            #+#    #+#             */
/*   Updated: 2022/09/08 18:31:49 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*tab[5];

	tab[0] = "abcd";
	tab[1] = "efgh";
	tab[2] = "ijkl";
	tab[3] = "mnop";
	tab[4] = 0;
	printf("%s", ft_strjoin(5, tab, " "));
	return (0);
}
