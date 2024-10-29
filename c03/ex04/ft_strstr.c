/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:51:16 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/01 19:09:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;
	int	j;
	int	k;

	l = 0;
	while (to_find[l] != '\0')
		l++;
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		k = i;
		while (to_find[j] != 0)
		{
			if (str[k] == to_find[j])
				k++;
			j++;
		}
		if (k - i == l)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	char s[] = "Boas noites";
	char ss[] = "gfh";
	char t[] = "Boas noites";
	char tt[] = "shfue";

	printf("%s", ft_strstr(s, ss));
	printf("\n");
	printf("%s", strstr(t, tt));
}*/