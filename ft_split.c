/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:10:13 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/07/17 11:48:49 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(const char *p, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (p[i])
	{
		while (p[i] == c && p[i])
			i++;
		if (p[i] != c && p[i])
		{
			len++;
			while (p[i] != c && p[i])
				i++;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	size_t	tmp;
	size_t	cn;

	i = 0;
	cn = 0;
	list = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!list)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tmp = i;
		while (s[tmp] && s[tmp] != c)
			tmp++;
		if (count_word(s, c) == cn)
			break ;
		list[cn] = ft_substr(s, i, tmp - i);
		cn++;
		i = tmp;
	}
	list[cn] = 0;
	return (list);
}
