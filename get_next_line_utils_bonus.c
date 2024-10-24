/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabartho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:09:49 by sabartho          #+#    #+#             */
/*   Updated: 2024/10/17 17:09:51 by sabartho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	unsigned long	len_tot;
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len_tot = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * len_tot + 1);
	if (!join)
		return (0);
	if (s1)
		while (s1[i])
			join[j++] = (char)s1[i++];
	i = 0;
	if (s2)
		while (s2[i])
			join[j++] = (char)s2[i++];
	join[j] = '\0';
	return (join);
}
