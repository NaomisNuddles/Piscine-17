/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:51:29 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/31 20:51:32 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size(dest) >= nb)
		return (nb + size(src));
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
	return (i);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	char s[] = "Boas ";
	char ss[] = "noites";
	char t[] = "Boas ";
	char tt[] = "noites";

	printf("%d", ft_strlcat(s, ss, 13));
	printf("\n");
	printf("%d", strlcat(t, tt, 13));
}*/
