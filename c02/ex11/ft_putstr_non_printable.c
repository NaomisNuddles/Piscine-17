/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:12:05 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 11:12:11 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puthex(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 48;
	while (i != 16)
	{
		str[i] = j;
		i++;
		if (j == 57)
			j = 96;
		j++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[16];

	puthex(hex);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 127 || (str[i] >= 1 && str[i] <= 31))
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int	main(void)
{
	char	a[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(a);
}*/
