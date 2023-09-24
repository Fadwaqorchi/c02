/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:09:16 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 03:26:06 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0' && i < (size - 1))
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
