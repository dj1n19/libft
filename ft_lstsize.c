/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:32:08 by bgenie            #+#    #+#             */
/*   Updated: 2022/10/12 14:04:14 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

#include <stdio.h>
int main(void)
{
	t_list elem1;
	t_list elem2;
	t_list elem3;
	t_list *lst;

	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = NULL;

	elem1.content = "gnah";
	elem2.content = "gnoh";
	elem3.content = "gnih";
	lst = &elem1;

	printf("%d\n", ft_lstsize(lst));
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}


	return 0;
}
