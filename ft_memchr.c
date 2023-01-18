/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:15:59 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:34:56 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memchr() function scans the initial n bytes of the memory 
//area pointed to by s for the first instance of c.
//Both c and the bytes of the memory area pointed to by s 
//are interpreted as unsigned char.
//string.h
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	character;
	size_t			index;
	unsigned char	*string;

	character = (unsigned char)c;
	index = 0;
	string = (unsigned char *)s;
	while (index < n)
	{
		if (*string == character)
			return (string);
		string++;
		index++;
	}
	return (NULL);
}
