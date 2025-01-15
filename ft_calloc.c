/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:50:52 by erde-la-          #+#    #+#             */
/*   Updated: 2024/10/07 10:47:56 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	s;
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = nmemb * size;
	arr = malloc(s);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, s);
	return (arr);
}
