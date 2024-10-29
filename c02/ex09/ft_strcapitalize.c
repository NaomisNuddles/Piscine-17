/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_strcapitalize.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:53:19 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/29 18:53:21 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (!((str[i - 1] >= 65 && str[i - 1] <= 90) \
			|| (str[i - 1] >= 97 && str[i - 1] <= 122) \
			|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*#include <unistd.h>
int	main(void)
{
	char	s[] = "salUt, comment tu vas ? 42mots Quarante-deux;";
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	ft_strcapitalize(s);
	write(1, s, i);
}*/