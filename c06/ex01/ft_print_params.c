/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:54:13 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/03 02:54:15 by nleandro         ###   ########.fr       */
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
	int	i;

	if (a > 1)
	{
		i = 1;
		while (i < a)
		{
			write(1, b[i], strl(b[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
