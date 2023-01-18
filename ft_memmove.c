/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:51:57 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:33:50 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*destination;

	source = (char *)src;
	destination = dst;
	if (source < destination)
	{
		while (n--)
		{
			destination[n] = source[n];
		}
	}
	else
		ft_memcpy(destination, source, n);
	return (destination);
}
