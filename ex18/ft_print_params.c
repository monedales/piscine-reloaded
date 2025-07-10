/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:12:52 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/10 12:37:42 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	args;

	args = 1;
	while (args < argc)
	{
		ft_putstr(argv[args]);
		ft_putchar('\n');
		args++;
	}
	return (0);
}
