/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:12:38 by erde-la-          #+#    #+#             */
/*   Updated: 2024/10/07 11:09:07 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_str(char const *s, char c)
{
	size_t	i;
	size_t	str_count;

	i = 0;
	str_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			i++;
			str_count++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (str_count);
}

static size_t	ft_word_len(const char *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != c)
		i++;
	return (i);
}

static char	*ft_paste_word(const char *src, char c)
{
	size_t	i;
	char	*dest;

	dest = ft_calloc(ft_word_len(src, c) + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	*ft_free(char **arr, size_t iterator)
{
	while (iterator > 0)
		free(arr[--iterator]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;

	arr = (char **)ft_calloc(sizeof(char *), ft_count_str(s, c) + 1);
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			arr[j] = ft_paste_word((char *)s + i, c);
			if (arr[j] == NULL)
				return (ft_free(arr, j));
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
