/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:32:30 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 03:06:30 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char	str1[] = "FADWAQORCHI";
	char	str2[] = "theo123";

 printf("%d\n", ft_str_is_uppercase(str1));
 printf("%d\n", ft_str_is_uppercase(str2));
 return (0);
}*/
