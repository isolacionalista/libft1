/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:09:01 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:11:47 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcao localiza o primeiro char de uma string
//um null tambem conta, se o char for null
//a funcao vai devolver isso, se nao tiver, 0
//#include <string.h>
//#include <stdio.h>

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	character;

	index = 0;
	character = (char)c;
	while (s[index])
	{
		if (s[index] == character)
			return (&((char *)s)[index]);
		index++;
	}
	if (character == '\0')
		return (&((char *)s)[index]);
	return (NULL);
}

//int main()
//{
//	char *str;
//	char *test;
//	char *original;
//
//	str = "bom dia";
//	test = ft_strchr(str, 'i');
//	original = strchr(str, 'i');
//
//	if (test == original)
//		printf("noice\n");
//	else if (test != original)
//		printf("megafail\n");
//
//	test = ft_strchr(str, ' ');
//	original = strchr(str, ' ');
//
//	if (test == original)
//		printf("noice\n");
//	else if (test != original)
//		printf("megafail\n");
//
//	test = ft_strchr(str, '9');
//	original = strchr(str, '9');
//	
//	if (test == original)
//		printf("noice\n");
//	else if (test != original)
//		printf("megafail\n");
//}
