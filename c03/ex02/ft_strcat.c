/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:46:10 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/31 16:46:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	char s[] = "Boas ";
	char ss[] = "noites ";
	char t[] = "Boas ";
	char tt[] = "noites";

	printf("%s", ft_strcat(s, ss));
	printf("\n");
	printf("%s", strcat(t, tt));
}*/