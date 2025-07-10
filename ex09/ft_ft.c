/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:59:27 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/07 21:06:35 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	x;
	int	*ptr;

	x = 24;
	ptr = &x;
	printf("%d\n", *ptr);
	ft_ft(ptr);
	printf("%d\n", *ptr);
	return (0);
}
