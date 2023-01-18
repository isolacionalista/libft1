/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:34:58 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:35:18 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	index;
	char	*new_str;

	index = ft_strlen(src) + 1;
	new_str = malloc(sizeof(char) * index);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, src, index);
	return (new_str);
}
