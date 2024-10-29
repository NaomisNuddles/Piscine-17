/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:57:55 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/29 18:09:24 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	char	s[] = "rjjbfdb6rjfnibai";
	int		i;
	
	i = ft_str_is_alpha(s);	
	printf("%d\n", i);
}*/