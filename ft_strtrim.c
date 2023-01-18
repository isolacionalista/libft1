/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:02:40 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:28:03 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//never forget to define helper functions as static

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	i;

	if (!s || !set)
		return (0);
	while (*s && ft_strchr(set, *s))
		s++;
	i = ft_strlen(s);
	while (i && ft_strchr(set, s[i]))
		i--;
	return (ft_substr(s, 0, i + 1));
}

//#include <stdio.h>
//
//
//int main()
//{
//	char s1[] = "ola eu sou isto";
//	char set[] = "";
//
//	printf("%s", ft_strtrim(s1, set));
//}