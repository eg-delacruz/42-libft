/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:10:43 by erde-la-          #+#    #+#             */
/*   Updated: 2024/09/18 14:10:45 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	if (dest_ptr == src_ptr)
		return (dest);
	if (dest > src)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n)
		{
			dest_ptr--;
			src_ptr--;
			*dest_ptr = *src_ptr;
			n--;
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
