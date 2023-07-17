/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:24:56 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/07/11 12:50:46 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(src))
	{
		if (src[i] == (char)c)
			return ((char *) &src[i]);
		i++;
	}
	return (0);
}
