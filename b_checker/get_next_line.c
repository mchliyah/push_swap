/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:45:53 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:24:45 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

int	strsearch(char *str, int c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	while (i < j && str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (i);
		i++;
	}
	return (-1);
}

char	*not_found_n(char **str)
{
	char	*temp;

	if (*str != NULL && **str != '\0')
	{
		temp = *str;
		*str = NULL;
		return (temp);
	}
	else
	{
		free(*str);
		*str = NULL;
		return (NULL);
	}
}

char	*found_n(char **str)
{
	char	*temp;
	char	*line;
	int		i;

	i = strsearch(*str, '\n');
	temp = *str;
	line = ft_substr(*str, 0, i + 1);
	*str = ft_substr(*str, i + 1, ft_strlen(*str));
	free(temp);
	temp = NULL;
	return (line);
}

char	*full_static(char	*storage, char *rest, int fd, int read_return)
{
	while (strsearch(storage, '\n') == -1)
	{
		read_return = read(fd, rest, 1);
		if (read_return == 0 || read_return == -1)
			break ;
		rest[read_return] = '\0';
		storage = ft_strjoin(storage, rest);
	}
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*rest;
	char		*line;
	int			read_return;

	read_return = 0;
	if (fd < 0 || 1 <= 0)
		return (NULL);
	if (!storage)
	{
		storage = ft_getstrdup("");
		if (!storage)
			return (NULL);
	}
	rest = malloc(sizeof(char) * 2);
	storage = full_static(storage, rest, fd, read_return);
	free (rest);
	if (strsearch(storage, '\n') == -1)
		return (not_found_n(&storage));
	line = found_n(&storage);
	return (line);
}
