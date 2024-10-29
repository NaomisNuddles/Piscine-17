/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:04:55 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/04 09:02:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	num[5];

	num[2] = 32;
	i = -1;
	while (i++ <= 97)
	{
		j = i;
		while (j++ <= 98)
		{
			num[0] = i / 10 + 48;
			num[1] = i % 10 + 48;
			num[3] = j / 10 + 48;
			num[4] = j % 10 + 48;
			write(1, num, 5);
			if (i != 98)
				write(1, ", ", 2);
		}
	}
}
/*int	main(void)
{
	ft_print_comb2();
}*/