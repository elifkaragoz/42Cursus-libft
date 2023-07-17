/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:18:05 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/07/13 15:18:45 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*num;
	int				len;
	unsigned int	cpy_n;

	len = ft_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len--] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		cpy_n = n * -1;
		num[0] = '-';
	}
	else
		cpy_n = n;
	while (cpy_n)
	{
		num[len] = 48 + (cpy_n % 10);
		cpy_n = cpy_n / 10;
		len--;
	}
	return (num);
}
