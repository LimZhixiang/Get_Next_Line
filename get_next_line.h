/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:18:52 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 20:47:57 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*ft_strdup(char *s);
int		ft_strchr(char *str, char c);
char	*ft_line_extract(char *store);
char	*ft_strjoin(char *store, char *buf);
char	*ft_update_join(char *temp);
char	*ft_update_store(char *temp);
char	*get_next_line(int fd);

#endif