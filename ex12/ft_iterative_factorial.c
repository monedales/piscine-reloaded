/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:16:22 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/10 12:36:47 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		result = (nb * result);
		nb--;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("fatorial de 5: %d\n", ft_iterative_factorial(5));
// 	printf("fatorial de 0: %d\n", ft_iterative_factorial(0));
// 	printf("fatorial de ?: %d\n", ft_iterative_factorial(-989));
// 	return (0);
// }