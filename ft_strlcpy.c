/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:42:45 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:13:21 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	ft_strlen(src);
	index = 0;
	if (size > 0)
	{
		while ((src[index] != '\0') && (index < (size - 1)))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (ft_strlen(src));
}

//int main()
//{
//    char *dest;
//    char *src;
//    int len;
//
//    src = calloc(11, sizeof(char));
//    dest = calloc(7, sizeof(char));
//    src = "bamos ber se funcemina";
//    len = ft_strlcpy(dest, src, 7);
//    printf("Source is: %s\n", src);
//    printf("Final result is: %s\n", dest);
//    printf("Lenght of source: %d\n", len);
//}
