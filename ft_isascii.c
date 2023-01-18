/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:22:42 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 13:31:39 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//testa se e ascii
//#include <ctype.h>

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
