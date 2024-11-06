/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:48:01 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/25 20:56:15 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*int	main(int a, char **b)
{
	if (a > 2)
	{
		int	i;
		int	neg;
		int	n;
		int aa;
		int bb;

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
		aa = n * neg;

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
		bb = n * neg;

		printf("og: a - %d & b - %d", aa, bb);
		printf("\n");
		ft_swap(aa, bb);
		printf("ch: a - %d & b - %d", aa, bb);
	}
}*/