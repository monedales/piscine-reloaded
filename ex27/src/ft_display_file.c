/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:47:58 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/13 16:18:05 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_str_fd(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

int	main(int argc, char **argv)
{
	char	buffer[1024];
	int		read_value;
	int		fd;

	if (argc == 1)
		return (ft_str_fd("File name missing.\n", 2), 1);
	if (argc > 2)
		return (ft_str_fd("Too many arguments.\n", 2), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	read_value = read(fd, buffer, 1024);
	while (read_value > 0)
	{
		write(1, buffer, read_value);
		read_value = read(fd, buffer, 1024);
	}
	if (read_value == -1)
	{
		ft_str_fd("Read Error!\n", 2);
		return (1);
	}
	close(fd);
	return (0);
}
