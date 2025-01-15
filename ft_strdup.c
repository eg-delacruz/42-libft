/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:44:44 by erde-la-          #+#    #+#             */
/*   Updated: 2024/09/26 14:48:42 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	s_len;

	s_len = ft_strlen(s);
	new_s = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (!new_s)
		return (NULL);
	ft_memcpy(new_s, s, s_len);
	return (new_s);
}
