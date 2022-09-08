/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 05:07:26 by hleong            #+#    #+#             */
/*   Updated: 2022/09/08 18:45:46 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "Hello bijjeszzz";
	s2 = strdup(s1);
	s3 = ft_strdup(s1);
	printf("S1 = %s\n", s1);
	printf("S2 = %s\n", s2);
	printf("S3 = %s\n", s3);
	return (0);
}
