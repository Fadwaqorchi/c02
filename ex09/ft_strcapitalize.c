/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:02:46 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 03:21:45 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{	
			str[0] -= 32;
		}
		if ((str[i] >= 32 && str[i] <= 47)
			|| (str[i] >= 58 && str[i] <= 64) || (str[i] >= 123))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
			str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[];

	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/
