/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:54:03 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 02:54:06 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char **b)
{
	int	i;

	if (a > 0)
	{
		i = 0;
		while (b[0][i] != 0)
			i++;
		write(1, b[0], i);
		write(1, "\n", 1);
	}
	return (0);
}
