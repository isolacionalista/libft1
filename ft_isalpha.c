/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:32:16 by imendonc          #+#    #+#             */
/*   Updated: 2023/01/18 18:34:34 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcao que testa se e do alfabeto
//#include <ctype.h>
//#include <stdio.h>

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

//int main()
//{
//    int c;
//
//    c = 120;
//
//    ft_isalpha(c);
//    isalpha(c);
//}
