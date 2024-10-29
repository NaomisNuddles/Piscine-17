/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:14:30 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/27 05:17:01 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
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
		i = n * neg;
		printf("og: %d", i);
		printf("\n");
		int *p = &i;
		int **p1 = &p;
		int ***p2= &p1;
		int ****p3= &p2;
		int *****p4= &p3;
		int ******p5= &p4;
		int *******p6= &p5;
		int ********p7= &p6;
		//int *********p8= &p7;
		ft_ultimate_ft(&p7);
		printf("ch: %d", i);
	}
}*/