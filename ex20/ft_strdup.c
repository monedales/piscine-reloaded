/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:41:56 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/10 17:22:41 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		count;
	int		len;

	len = ft_strlen(src) + 1;
	str = malloc(len * sizeof(char));
	count = 0;
	while (src[count])
	{
		str[count] = src[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*origin = "hello hello hello23";
// 	char	*doppelganger = ft_strdup(origin);

// 	if (doppelganger != NULL)
// 	{
// 		printf("Origin: %s\n", origin);
// 		printf("Doppelganger: %s\n", doppelganger);
// 	}
// 	else
// 	{
// 		printf("Fail!\n");
// 	}
// 	free(doppelganger);
// 	return (0);
// }
