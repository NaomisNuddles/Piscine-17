/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:12:39 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 03:12:40 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
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
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(14));
}*/
