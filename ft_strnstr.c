/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:06:16 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/09 01:19:38 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*needle_start;
	const char	*begin;
	size_t		i;

	i = 0;
	begin = haystack;
	needle_start = needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && i < len)
	{
		while (*begin == *needle && i++ < len)
		{
			if (!*(needle + 1))
				return ((char *)haystack);
			begin++;
			needle++;
		}
		haystack++;
		begin = haystack;
		i++;
		needle = needle_start;
	}
	return (NULL);
}
