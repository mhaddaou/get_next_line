/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:27:57 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/20 23:34:56 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_ret_line(char **or_buffer, char **or_line)
{
	int		i;
	char	*temp;

	i = 0;
	temp = NULL;
	while ((*or_buffer)[i] != '\n' && (*or_buffer)[i] != '\0')
		i++;
	if ((*or_buffer)[i] == '\n')
	{
		*or_line = ft_substr(*or_buffer, 0, i + 1);
		temp = ft_substr((*or_buffer) + i + 1, 0, ft_strlen(*or_buffer) - i);
	}
	else
		*or_line = ft_strdup(*or_buffer);
	free(*or_buffer);
	*or_buffer = NULL;
	return (temp);
}

char	*ft_filter(int fd, char *static_buffer)
{
	char	*buffer;
	int		sz;

	sz = 1;
	buffer = (char *) malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	*buffer = '\0';
	while (sz != 0 && !ft_strchr(buffer, '\n'))
	{
		sz = read(fd, buffer, BUFFER_SIZE);
		if (sz == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[sz] = '\0';
		static_buffer = ft_strjoin(static_buffer, buffer);
	}
	free(buffer);
	return (static_buffer);
}

char	*get_next_line(int fd)
{
	static char	*static_buffer;
	char		*line;

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	static_buffer = ft_filter(fd, static_buffer);
	if (!static_buffer)
		return (NULL);
	static_buffer = ft_ret_line(&static_buffer, &line);
	if (*line == '\0')
	{
		free(line);
		line = NULL;
	}
	return (line);
}
