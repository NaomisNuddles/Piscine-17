/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:45:50 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/31 16:47:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	char s[] = "";
	char ss[] = "Boas";

	printf("%d\n", ft_strcmp(s, ss));
	printf("%d\n", strcmp(s, ss));
}*/