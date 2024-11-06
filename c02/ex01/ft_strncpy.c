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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ss[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	char	dd[7];
	char	s[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	char	d[7];

	printf("%s.", ft_strncpy(dd, ss, 8));
	printf("\n");
	printf("%s.", strncpy(d, s, 8));
}*/