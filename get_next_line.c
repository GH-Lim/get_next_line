/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:42:58 by gulim             #+#    #+#             */
/*   Updated: 2021/06/28 18:28:24 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		check_line(char *buff, int buff_size)
{
	int			i;

	i = 0;
	while (i < buff_size)
	{
		if (buff[i] == '\n')
			return (i);
		i++;
	}
	return (-1)
}

char	*ft_split_line(char **line, char *temp)
{
}

int		get_next_line(int fd, char **line)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*temp;
	int			size;

	while ((size = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[BUFFER_SIZE] = 0;
		
	}
}
