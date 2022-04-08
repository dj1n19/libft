/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:49:53 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/08 15:59:14 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	s += ft_strlen(s);
	if (!c)
		return ((char *)s);
	while (*--s)
	{
		if (*s == (char) c)
			return ((char *)s);
	}
	return (NULL);
}
