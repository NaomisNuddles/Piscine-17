/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:10:03 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 03:10:05 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int nb)
{
	int	n;

	n = nb;
	if (nb <= 1)
		return (0);
	while (n != 2)
	{
		n--;
		if (nb % n == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (prime(nb) != 1)
		nb++;
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(32));
}*/