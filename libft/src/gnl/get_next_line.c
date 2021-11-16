/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:51:26 by lugonzal          #+#    #+#             */
/*Updated: 2021/07/19 20:53:00 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../inc/get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;
	char		*buffer;
	ssize_t		size;

	if (fd == 2 || fd < 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	size = 1;
	while (size > 0 && !ft_nl(str, '\n'))
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[size] = '\0';
		str = strjoin(str, buffer);
	}
	free(buffer);
	line = cutstr(str, 0, len_c(str, 10) + 1, 0);
	str = cutstr(str, len_c(str, 10) + 1, len_c(str, 0) - len_c(line, 0), 1);
	return (ret_val(size, line));
}
