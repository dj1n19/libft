/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:11:55 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/05 18:42:28 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_bytes;
	const unsigned char	*src_bytes;
	int					i;
	int					j;

	i = 0;
	j = 0;
	dst_bytes = dst;
	src_bytes = src;
	while (n-- > 0)
	{
		if (!src_bytes[i])
			i = 0;
		dst_bytes[j++] = src_bytes[i++];
	}
	return (dst_bytes);
}
