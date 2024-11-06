/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:52:20 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/04 09:02:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[5];

	num[0] = 47;
	num[3] = 44;
	num[4] = 32;
	while (num[0]++ <= 54)
	{
		num[1] = num [0];
		while (num[1]++ <= 55)
		{
			num[2] = num[1];
			while (num[2]++ <= 56)
			{
				if (num[0] == 55 && num[1] == 56 && num[2] == 57)
					write(1, num, 3);
				else
					write(1, num, 5);
			}
		}
	}
}
/*int	main(void)
{
	ft_print_comb();
}*/