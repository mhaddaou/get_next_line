/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 03:47:06 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/21 07:13:51 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (((char *)str)[i])
	{
		if (((char *)str)[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (((char *)str)[i] == '\0' && (char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	int		i;
	char	*s;

	if (start >= ft_strlen(str))
		len = 0;
	if (len > ft_strlen(str))
	len = ft_strlen(str);
	i = 0;
	s = (char *) malloc (sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (start < len)
	{
		s[i] = str[start];
		i++;
		start++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		len;
	int		j;

	if (!s1)
		s1 = ft_strdup("");
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (i + j < len)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (free((void *)s1), str);
}
