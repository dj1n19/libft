/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:44:30 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/07 16:03:36 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	nbr;
	int	is_neg;

	nbr = 0;
	is_neg = 0;
	while (!ft_isprint(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg = 1;
		str++;
	}
	while (*str && *str >= 48 && *str <= 57)
	{
		if (is_neg == 1)
			nbr -= *str++ - 48;
		else
			nbr += *str++ - 48;
		nbr *= 10;
	}
	nbr /= 10;
	if (is_neg == 1)
		return (-nbr);
	return (nbr);
}
#include <string.h>
int main()
{
	const char e[] = {9, 10, 11, 12, 13, 0};
	char	*s = ft_strjoin(e, "-2147483648");
	printf("%s\n", s);
	printf("%d\n", ft_atoi(s));
	free(s);
	return 0;
}
