/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:46:00 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/01 19:09:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
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
	char s[] = "Boasunoites";
	char ss[] = "Boas noites";

	printf("%d\n", ft_strncmp(s, ss, 6));
	printf("%d\n", strncmp(s, ss, 6));
}*/