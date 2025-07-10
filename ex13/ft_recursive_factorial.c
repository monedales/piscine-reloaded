/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:44:25 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/10 12:37:13 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("fatorial de 5: %d\n", ft_recursive_factorial(5));
// 	printf("fatorial de 0: %d\n", ft_recursive_factorial(0));
// 	printf("fatorial de ?: %d\n", ft_recursive_factorial(-989));
// 	return (0);
// }
