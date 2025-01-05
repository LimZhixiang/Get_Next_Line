/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:18:52 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 20:45:00 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static char	*ft_buftostore(int fd, char *store)
{
	char	*buf;
	int	buf_size;
	char	*temp;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	buf_size = 1;
	while (buf_size > 0)
	{
		buf_size = read(fd, buf, BUFFER_SIZE);
		if (buf_size <= 0 && !store)
		{
			free (store);
			break ;
		}
		if (!store && buf_size > 0)
			store = ft_strdup("");
		buf[buf_size] = '\0';
		temp = store;
		store = ft_strjoin(temp, buf);
		free(temp);
		if (ft_strchr(store, '\n'))
			break ;
	}
	free (buf);
	return (store);
}

static char	*ft_extract(char *line)
{
	char	*store;
	
	int	i;
	
	i = 0;
	store = ft_update_store(line);
	while (line[i] != '\n' && line[i])
		i++;
	i++;
	line[i] = '\0';
	return (store);
}
	

char	*get_next_line(int fd)
{
	static	char	*store;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 600)
		return (NULL);
	line = ft_buftostore(fd, store);
	if (!line)
		return (NULL);
	store = ft_extract(line);
	return (line);
}
