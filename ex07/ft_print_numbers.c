/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:38:49 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/08 16:15:37 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

void	ft_print_numbers(void)
{
	int	num;

	num = 0;
	while (num <= 9)
	{
		ft_putchar(num + '0');
		num++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
