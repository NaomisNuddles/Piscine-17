/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:08:58 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 03:09:01 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (n != 1)
		{
			n--;
			nb *= n;
		}
	}
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/