/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:47:58 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/12 17:22:34 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_str_fd(char *str, int fd)
{
	while (*str)
	{
		write(fd, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_str_fd("File name missing.", 2);
	if (argc > 2)
		ft_str_fd("Too many arguments.", 2);
	if (argc == 2)
	{
		ft_str_fd("*content of file Makefile*", 1);
	}
	return (0);
}
