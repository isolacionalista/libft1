/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:17:43 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:34:23 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_memb, size_t byte_size)
{
	void	*ptr;

	ptr = (void *)malloc(byte_size * n_memb);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', (byte_size * n_memb));
	return (ptr);
}
