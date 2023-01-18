/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:30:35 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:45 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cont;
	t_list	*s;

	cont = *lst;
	s = 0;
	while (cont != 0)
	{
		s = cont->next;
		del(cont->content);
		free(cont);
		cont = s;
	}
	*lst = 0;
}
