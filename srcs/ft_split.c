/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:58 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/07 18:19:28 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"
//#include <stdio.h>

static int	ft_count_delim(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{	
			count++;
			while (s[i] == c)
				i++;
			if (!s[i])
			{
				count--;
				return (count);
			}
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**strings_array;
	char		**strings_array_start;
	const char	*s_start;
	int			i;

	while (*s == c)
		s++;
	strings_array = malloc(sizeof(char *) * (ft_count_delim(s, c) + 2));
	//printf("%d\n", ft_count_delim(s, c));
	if (!strings_array)
		return (NULL);
	strings_array_start = strings_array;
	s_start = s;
	while(*s)
	{
		i = 0;
		while (*s != c)
		{
			s++;
			i++;
		}
		*strings_array++ = ft_substr(s_start, 0, i);
		while (*s == c)
			s++;
		s_start = s;
	}
	*strings_array = NULL;
	return (strings_array_start);
}

/*int main()
{
	char **tab = ft_split("xxtripouillexx42xx", 'x');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	return (0);
}*/
