/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:07:52 by yabarhda          #+#    #+#             */
/*   Updated: 2024/10/31 12:07:54 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*to_erase;

	temp = *lst;
	while (temp != NULL)
	{
		(*del)(temp->content);
		to_erase = temp;
		temp = temp->next;
		free(to_erase);
	}
	*lst = NULL;
}
