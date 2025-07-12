/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:43:02 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/12 13:38:14 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	count;

	count = 0;
	while (length > count)
	{
		f(tab[count]);
		count++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	int	digit;
// 	int	div;
// 	int	int_min;

// 	int_min = -2147483648;
// 	if (nb == int_min)
// 	{
// 		ft_putchar('-');
// 		ft_putchar('2');
// 		nb = 147483648;
// 	}
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	div = nb / 10;
// 	digit = (nb % 10) + '0';
// 	if (div > 0)
// 		ft_putnbr(div);
// 	ft_putchar(digit);
// }

// int	main(void)
// {
// 	int	tab[3] = {12, 5, 3};
// 	int	len;

// 	len = 3;
// 	ft_foreach(tab, len, &ft_putnbr);
// 	return (0);
// }
