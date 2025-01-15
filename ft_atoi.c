/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:56:51 by erde-la-          #+#    #+#             */
/*   Updated: 2024/09/18 14:56:53 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*nptr_cpy;
	int		result;
	int		parity;

	nptr_cpy = (char *)nptr;
	while ((*nptr_cpy >= 9 && *nptr_cpy <= 13) || *nptr_cpy == ' ')
		nptr_cpy++;
	parity = 1;
	if (*nptr_cpy == '-' || *nptr_cpy == '+')
	{
		if (*nptr_cpy == '-')
			parity *= -1;
		nptr_cpy++;
	}
	result = 0;
	while (*nptr_cpy && (*nptr_cpy >= '0' && *nptr_cpy <= '9'))
	{
		result *= 10;
		result += (*nptr_cpy - 48);
		nptr_cpy++;
	}
	return (result * parity);
}
