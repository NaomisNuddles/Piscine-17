/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:56:47 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/31 16:49:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*#include <unistd.h>
int	main(void)
{
	char	ss[4] = {48, 49, 50, 51};
	char	dd[4];
	int	j;

	ft_strcpy(dd, ss);
	write(1, dd, 5);
}*/