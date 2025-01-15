/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:36:02 by erde-la-          #+#    #+#             */
/*   Updated: 2024/10/17 14:53:12 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	char	*start_of_str;

	if (!s1 || !s2)
		return (NULL);
	joined_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	start_of_str = joined_str;
	while (*s1)
	{
		*joined_str = *s1;
		joined_str++;
		s1++;
	}
	while (*s2)
	{
		*joined_str = *s2;
		joined_str++;
		s2++;
	}
	*joined_str = '\0';
	return (start_of_str);
}
