/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:41:02 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/06 14:38:34 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;

	cdst = dst;
	if (dst < src)
	{
		while (len--)
			*cdst++ = *(char *)src++;
	}
	else
	{
		cdst += len;
		src += len;
		while (len)
		{
			*--cdst = *(char *)--src;
			len--;
		}
	}
	return (dst);
}
