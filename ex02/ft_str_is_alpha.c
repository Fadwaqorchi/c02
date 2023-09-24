/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:47:55 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 03:03:07 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
char	str2[] = "theo123";
 printf("%d\n", ft_str_is_alpha(str1));
 printf("%d\n", ft_str_is_alpha(str2));
 return (0);
}*/
