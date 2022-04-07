/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:12:51 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/06 18:23:07 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_str;
	const char	*substr;
	int			i;

	i = 0;
	if (start > ft_strlen(s))
	{
		new_str = malloc(1);
		if (!new_str)
			return (NULL);
		*new_str = 0;
		return (new_str);
	}
	substr = &s[start];
	if (ft_strlen(substr) > len)
		new_str = malloc(len + 1);
	else
		new_str = malloc(ft_strlen(substr) + 1);
	if (!new_str)
		return (NULL);
	while (s[start] && len--)
		new_str[i++] = s[start++];
	new_str[i] = 0;
	return (new_str);
}