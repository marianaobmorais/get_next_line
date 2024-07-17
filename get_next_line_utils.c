/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaoli <mariaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:03:29 by mariaoli          #+#    #+#             */
/*   Updated: 2024/05/13 16:04:57 by mariaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	while (*s != '\0' && *s != chr)
		++s;
	if (*s == chr)
		return ((char *)(s));
	return (NULL);
}

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	size;
	char	*ptr;

	size = ft_strlen(str) + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	i;
	char	*res;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		res[i] = s1[i];
		++i;
	}
	i = 0;
	while (i < l2)
	{
		res[l1 + i] = s2[i];
		++i;
	}
	res[l1 + i] = '\0';
	return (res);
}
