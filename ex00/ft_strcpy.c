/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 01:53:12 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 02:13:03 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src [i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char	f[] = "fadwa is pretty";
	char	g[15];
	*ft_strcpy(g, f);
	printf("%s", g);
}*/
