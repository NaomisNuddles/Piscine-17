/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:41:47 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/04 09:01:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
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
		ft_is_negative(n * neg);
	}
}*/