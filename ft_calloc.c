/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:50:48 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/05 15:03:58 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_mem;

	allocated_mem = malloc(count * size);
	if (!allocated_mem)
		return (NULL);
	ft_bzero(allocated_mem, count * size);
	return (allocated_mem);
}
