/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:00:05 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 03:02:18 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
char	str1[] = "1234567809";
char	str2[] = "theo";

 printf("%d\n", ft_str_is_numeric(str1));
 printf("%d\n", ft_str_is_numeric(str2));
 return (0);
}*/
