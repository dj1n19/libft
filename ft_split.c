/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:58 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/08 13:49:57 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	ft_count_delim(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		while(*s == c)
			s++;
		s++;
	}
	return (count);
}

static char	*ft_trim(char const *s, char c)
{
	char	*trim;
	int		i;

	while (*s == c)
		s++;
	i = ft_strlen(s) - 1;
	while (s[i] == c)
		i--;
	trim = ft_substr(s, 0, i + 1);
	return (trim);
}

static char	*ft_word_extract(char *s, char c)
{
	char	*word;
	char	*start;
	int	i;

	start = s;
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			word = ft_substr(start, 0, i);
			return (word);
		}
		i++;
		s++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strings_array;
	char	**sa_start;
	char	*tmp;

	tmp = ft_trim(s, c);
	strings_array = malloc(sizeof(char *) * (ft_count_delim(tmp, c) + 1));
	if (!strings_array)
		return (NULL);
	sa_start = strings_array;
	while(*tmp)
	{
		if (*tmp != c)
		{
			*strings_array = ft_word_extract(tmp, c);
			if (!strings_array)
				return (NULL);
			tmp += ft_strlen(*strings_array);
			printf("%s\n", tmp);
			strings_array++;
		}
		else
			tmp++;
	}
	*strings_array = 0;
	free(tmp);
	return (sa_start);
}

int main()
{
	char **tab = ft_split("xxtripouillexx42xx", 'x');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	return (0);
}
