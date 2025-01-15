/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:18:13 by erde-la-          #+#    #+#             */
/*   Updated: 2024/10/07 11:15:14 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;
	size_t	s_len;

	if (!f)
		return (NULL);
	s_len = ft_strlen(s);
	new_str = (char *)ft_calloc(sizeof(char), s_len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}
