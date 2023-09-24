/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fqorchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:15:45 by fqorchi-          #+#    #+#             */
/*   Updated: 2023/09/24 03:42:16 by fqorchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if (str >= 32 && str <= 126)
	{
		return (1);
	}	
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcde"[str[i] / 16]);
			ft_putchar("0123456789abcde"[str[i] % 16]);
		}
		i++;
	}
}
/*
int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
