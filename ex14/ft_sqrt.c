/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:05:11 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/08 19:11:59 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (result >= 1)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("raiz quadrada de 4: %d\n", ft_sqrt(4));
// 	return (0);
// }
