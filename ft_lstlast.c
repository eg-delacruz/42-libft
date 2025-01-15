/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:54:55 by erde-la-          #+#    #+#             */
/*   Updated: 2024/09/30 11:58:48 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	lst_len;

	lst_len = ft_lstsize(lst);
	while (lst_len)
	{
		if (lst_len == 1)
			return (lst);
		lst = lst->next;
		lst_len--;
	}
	return (lst);
}
