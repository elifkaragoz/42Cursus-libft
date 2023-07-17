/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:31:01 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/07/11 13:28:56 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src;

	if (d == NULL && s == NULL)
		return (NULL);
	dest = (char *) d;
	src = (char *) s;
	i = 0;
	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
