/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:37:25 by erde-la-          #+#    #+#             */
/*   Updated: 2024/09/30 09:55:25 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_strlen(int n)
{
	int		len;
	long	nb;

	nb = n;
	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	db_n;
	int		str_len;

	db_n = n;
	str_len = ft_itoa_strlen(n);
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	str[str_len--] = '\0';
	if (db_n == 0)
		str[0] = '0';
	else if (db_n < 0)
	{
		str[0] = '-';
		db_n *= -1;
	}
	while (db_n > 0)
	{
		str[str_len] = 48 + (db_n % 10);
		db_n /= 10;
		str_len--;
	}
	return (str);
}
