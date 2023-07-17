/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:10:38 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/07/06 15:26:19 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	char	*c;
	size_t	s;

	c = malloc(nmem * size);
	s = 0;
	if (c == NULL)
		return (NULL);
	while (s < nmem * size)
	{
		c[s] = 0;
		s++;
	}
	return (c);
}
