/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:46:20 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/08 19:53:22 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	int len;

// 	str = "baby";
// 	len = ft_strlen(str);
// 	printf("len s2:%d\n", len);
// 	return (0);
// }