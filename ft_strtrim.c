/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:48:56 by erde-la-          #+#    #+#             */
/*   Updated: 2024/10/07 11:09:41 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_stop_char(char const *s1, char const *set, size_t s1_len)
{
	int				i;
	size_t			stop_char;
	unsigned char	toggler;

	i = s1_len - 1;
	stop_char = 0;
	toggler = 1;
	while (i >= 0 && toggler)
	{
		if (ft_check_char(s1[i], set))
		{
			stop_char++;
			i--;
		}
		else
			toggler = 0;
	}
	if (stop_char == s1_len)
		return (0);
	else
		return (s1_len - (stop_char) - 1);
}

static size_t	ft_start_char(char const *s1, char const *set)
{
	size_t			i;
	unsigned char	toggler;

	i = 0;
	toggler = 1;
	while (s1[i] && toggler)
	{
		if (ft_check_char(s1[i], set))
			i++;
		else
			toggler = 0;
	}
	if (i == ft_strlen(s1))
		return (1);
	else
		return (i--);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	stop_c;
	size_t	star_c;
	char	*new_str;

	s1_len = ft_strlen(s1);
	stop_c = ft_stop_char(s1, set, s1_len);
	star_c = ft_start_char(s1, set);
	new_str = ft_calloc(sizeof(char), (stop_c - star_c + 2));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, ((unsigned char *) s1 + star_c), stop_c - star_c + 1);
	return (new_str);
}
