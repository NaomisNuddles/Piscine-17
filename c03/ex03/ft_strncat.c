/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:46:23 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/31 16:46:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (j < nb && src[j] != 0)
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
	char ss[] = "noites";
	char t[] = "Boas ";
	char tt[] = "noites";

	ft_strncat(s, ss, 3);
	strncat(t, tt, 3);
	printf("%s", s);
	printf("\n");
	printf("%s", t);
}*/