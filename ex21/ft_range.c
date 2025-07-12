/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:45:37 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/12 13:38:58 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	count;
	int	size;

	size = (max - min) + 1;
	arr = malloc(size * sizeof(int));
	count = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		arr[count] = min;
		count++;
		min++;
	}
	return (arr);
}
// #include <stdio.h> 
// int	main(void)
// {
// 	int	min = 3;
// 	int	max = 13;
// 	int	i = 0;
// 	int *range= ft_range(min, max);
// 	int size = max - min;

// 	while (i < size)
// 	{
// 		printf("opa %d\n", range[i]);
// 		i++;
// 	}
// 	free(range);
// 	return (0);
// }
