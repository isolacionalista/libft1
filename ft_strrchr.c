/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:04:02 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:33:19 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//teste igual a strchr mas em reverse
//#include <stdio.h>
//#include <string.h>

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (0);
}

//int main()
//{
//	char *str;
//	char *test;
//	char *original;
//
//	str = "bom dia";
//	test = ft_strrchr(str, 'i');
//	original = strrchr(str, 'i');
//
//	if (test == original)
//    {
//		printf("noice\n");
//        printf("test: %s. original; %s\n", test, original);
//    }
//	else if (test != original)
//    {
//		printf("megafail\n");
//        printf("test: %s. original: %s\n", test, original);
//    }
//	test = ft_strrchr(str, ' ');
//	original = strrchr(str, ' ');
//
//    if (test == original)
//    {
//		printf("noice\n");
//        printf("test: %s. original; %s\n", test, original);
//    }
//	else if (test != original)
//    {
//		printf("megafail\n");
//        printf("test: %s. original: %s\n", test, original);
//   
//	test = ft_strrchr(str, '9');
//	original = strrchr(str, '9');
//
//    if (test == original)
//    {
//		printf("noice\n");
//        printf("test: %s. original; %s\n", test, original);
//    }
//	else if (test != original)
//    {
//		printf("megafail\n");
//        printf("test: %s. original: %s\n", test, original);
//    }
//}
