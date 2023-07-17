/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:37:28 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/07/17 15:02:55 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int x, size_t len)
{
	unsigned char	*s;
	int				i;

	s = b;
	i = 0;
	while (len > 0)
	{
		s[i] = x;
		len--;
		i++;
	}
	return (s);
}
