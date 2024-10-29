/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:01:16 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/04 09:24:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar(45);
		nb = -nb;
	}
	else if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}
/*int	main(int a, char **b)
{
	if (a > 1)
	{
		int	i;
		int	neg;
		int	n;

		i = 0;
		neg = 1;
		n = 0;
		while ((b[1][i] >= 9 && b[1][i] <= 13) || b[1][i] == 32)
			i++;
		while (b[1][i] == 43 || b[1][i] == 45)
		{
			if (b[1][i] == 45)
				neg *= -1;
			i++;
		}
		while (b[1][i] >= 48 && b[1][i] <= 57)
		{
			n = n * 10 + (b[1][i] - 48);
			i++;
		}
		ft_putnbr(n * neg);
	}
}*/