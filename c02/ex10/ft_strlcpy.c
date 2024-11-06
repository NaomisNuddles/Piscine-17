/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:57:25 by nleandro          #+#    #+#             */
/*   Updated: 2024/09/02 18:25:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	sizel(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (sizel(dest) >= size)
		return (size + sizel(src));
	while (i < size && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ss[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	char	dd[7];
	char	s[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	char	d[7];

	printf("%d", ft_strlcpy(dd, ss, 7));
	printf("\n");
	printf("%d", strlcpy(d, s, 7));
}*/