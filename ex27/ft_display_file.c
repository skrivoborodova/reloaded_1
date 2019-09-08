/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oearlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:16:55 by oearlene          #+#    #+#             */
/*   Updated: 2019/09/08 19:39:40 by oearlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int			main(int ac, char **av)
{
	int		fd;
	char	buf;

	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}
