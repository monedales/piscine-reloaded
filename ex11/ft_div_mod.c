/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:00:29 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/08 16:14:16 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
// int main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 13;
// 	b = 5;
// 	div = 0;
// 	mod = 0;
// 	printf("a: %d\n b: %d\n div: %d\n mod: %d\n", a, b, div, mod);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("a: %d\n b: %d\n div: %d\n mod: %d\n", a, b, div, mod);
// 	return (0);
// }
