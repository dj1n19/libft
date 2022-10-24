/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:47:10 by bgenie            #+#    #+#             */
/*   Updated: 2022/10/11 16:49:35 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("%s\n", strchr("gnah", 158));
// 	printf("%s\n", ft_strchr("gnah", 158));
// 	return 0;
// }