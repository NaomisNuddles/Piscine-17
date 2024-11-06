/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:01:16 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/31 21:50:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	strf(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (to_find == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	t_base(char *base)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (base[i] != 0)
	{
		if (strf(&base[i + 1], base[i]) == 1)
			return (0);
		i++;
	}
	if (base[0] == 0 || base [1] == 0)
		return (0);
	else if (strf(base, 43) == 1 || strf(base, 45) == 1)
		return (0);
	else
		return (i);
}

void	pchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (t_base(base) != 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_putnbr_base(-(nbr / t_base(base)), base);
			pchar(base[-(nbr % t_base(base))]);
		}
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		else if (nbr < t_base(base))
		{
			pchar(base[nbr]);
		}
		if (nbr >= t_base(base))
		{
			ft_putnbr_base(nbr / t_base(base), base);
			pchar(base[nbr % t_base(base)]);
		}
	}
}
/*int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
}*/