/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:44:30 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/09 00:51:35 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	nbr;
	int	is_neg;

	nbr = 0;
	is_neg = 0;
	if (!*str)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg = 1;
		str++;
	}
	while (*str && *str >= 48 && *str <= 57)
	{
		nbr *= 10;
		if (is_neg == 1)
			nbr -= *str++ - 48;
		else
			nbr += *str++ - 48;
	}
	return (nbr);
}
