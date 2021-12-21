/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 03:44:33 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/21 06:49:46 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# define MAX_FD (10240)
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
