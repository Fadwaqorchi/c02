/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:14:50 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 03:04:44 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
char	str1[] = "fadwaqorchi";
char	str2[] = "thEO123";
 printf("%d\n", ft_str_is_lowercase(str1));
 printf("%d\n", ft_str_is_lowercase(str2));
 return (0);
}*/
