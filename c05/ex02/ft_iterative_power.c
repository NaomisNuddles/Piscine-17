/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:13:20 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 03:13:24 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power != 1)
		{
			nb *= n;
			power--;
		}
	}
	return (nb);
}
/*include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(28, 3));
}*/
