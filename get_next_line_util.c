/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_util.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:05:34 by gulim             #+#    #+#             */
/*   Updated: 2021/06/28 18:28:28 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*result;

	len = ft_strlen(s1);
	if ((result = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	result[len] = 0;
	while (len--)
		result[len] = s1[len];
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if ((p = (char *)malloc(sizeof(char) * (len1 + len2 + 1))) == NULL)
		return (NULL);
	ft_memcpy(p, s1, len1);
	ft_memcpy(p + len1, s2, len2 + 1);
	return (p);
}
