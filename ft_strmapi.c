/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:08:44 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/08 18:49:27 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	a;

	str = ft_strdup(s);
	if (!str)
		return (0);
	a = 0;
	while (str[a])
	{
		str[a] = f(a, str[a]);
		a++;
	}
	return (str);
}
