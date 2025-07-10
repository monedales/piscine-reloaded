/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:49:17 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/07 20:56:07 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
// int	main(void)
// {
// 	ft_is_negative(2);
// 	ft_putchar('\n');
// 	ft_is_negative(-2);
// 	ft_putchar('\n');
// 	ft_is_negative(0);
// 	ft_putchar('\n');
// 	ft_is_negative(264656);
// 	ft_putchar('\n');
// 	return (0);
// }
