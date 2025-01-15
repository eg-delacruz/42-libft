/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:41:26 by erde-la-          #+#    #+#             */
/*   Updated: 2024/10/01 11:50:06 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;

	c = (unsigned char)c;
	s_len = ft_strlen(s);
	s += (s_len - 1);
	if (((char)c) == '\0')
		return ((char *)s + 1);
	while (s_len)
	{
		if (*s == c)
			return ((char *)s);
		s--;
		s_len--;
	}
	return (NULL);
}
