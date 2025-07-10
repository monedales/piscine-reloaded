/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:54:06 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/08 20:10:56 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count])
		count++;
	return (s1[count] - s2[count]);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char *s1 = "alou";
// 	char *s2 = "aloU";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return(0);
// }