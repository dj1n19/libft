/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:28:08 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/08 15:58:39 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	ft_nbr_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

void	ft_putnbr_fd(int n, int fd)
{
	char		digits[11];
	long int	nbr;
	int			i;

	i = ft_nbr_size(n);
	if (i == 0)
	{
		digits[0] = 48;
		digits[1] = 0;
	}
	else
		digits[i--] = 0;
	nbr = (long int) n;
	if (nbr < 0)
		write(fd, "-", 1);
	while (nbr != 0)
	{
		if (nbr < 0)
			digits[i] = -nbr % 10 + 48;
		else
			digits[i] = nbr % 10 + 48;
		nbr /= 10;
		i--;
	}
	ft_putstr_fd(digits, fd);
}
