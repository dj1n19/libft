/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:50:48 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/11 02:31:15 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_mem;

	if (count == 0 || size == 0)
		return (NULL);
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	allocated_mem = malloc(count * size);
	if (!allocated_mem)
		return (NULL);
	ft_bzero(allocated_mem, count * size);
	return (allocated_mem);
}
