/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:50:54 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/10 13:48:07 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count])
		count++;
	return (s1[count] - s2[count]);
}

void	ft_sort_args(int argc, char **argv)
{
	int		current;
	int		next;
	char	*temp;

	current = 1;
	while (current < argc - 1)
	{
		next = current + 1;
		while (next < argc)
		{
			if (ft_strcmp(argv[current], argv[next]) > 0)
			{
				temp = argv[current];
				argv[current] = argv[next];
				argv[next] = temp;
			}
			next++;
		}
		current++;
	}
}

int	main(int argc, char **argv)
{
	int	args;

	ft_sort_args(argc, argv);
	args = 1;
	while (args < argc)
	{
		ft_putstr(argv[args]);
		ft_putchar('\n');
		args++;
	}
	return (0);
}
