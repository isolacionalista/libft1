/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:11:05 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:45:41 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr = 0;
		return (ptr);
	}
	if (len >= ft_strlen(s))
		len = (ft_strlen(s) - start);
	ptr = (char *)malloc(1 + len);
	if (!ptr)
		return (NULL);
	while (start < ft_strlen(s) && j < len)
	{
		ptr[j] = s[start];
		j++;
		start++;
	}
	ptr[j] = 0;
	return (ptr);
}
