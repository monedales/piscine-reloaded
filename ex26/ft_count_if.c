/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:45:41 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/12 13:39:28 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_isalpha(char *str)
// {
// 	int	count;

// 	count = 0;
// 	while (str[count])
// 	{
// 		if (!((str[count] >= 'a' && str[count] <= 'z') 
// 		|| (str[count] >= 'A' && str[count] <= 'Z')))
// 		{
// 			return (0);
// 		}
// 		count++;
// 	}
// 	return (1);
// }
// int	ft_str(char *str)
// {
// 	while (str++)
// 	{
// 		ft_isalpha(str++);
// 	}
// 	return(str);
// }

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
// int main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return (1);
// 	printf("%d\n",ft_count_if(++argv, ft_str(ft_isalpha)));
// 	return (0);
// }