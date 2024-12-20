/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:54:31 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 02:54:32 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strl(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

int	main(int a, char **b)
{
	if (a > 1)
	{
		while (a > 1)
		{
			write(1, b[a - 1], strl(b[a - 1]));
			write(1, "\n", 1);
			a--;
		}
	}
	return (0);
}
