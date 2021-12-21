/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:35:32 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/21 07:15:41 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_filter(int fd, char *static_buffer);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_ret_line(char **or_buffer, char **or_line);
char	*ft_substr(const char *str, unsigned int start, size_t len);

#endif
