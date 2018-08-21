/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:17:21 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/20 16:05:03 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		nbr;

	nbr = nb;
	if (nb == 1 || nb == 0)
	{
		nbr = 1;
	}
	while ( nb > 1)
	{
		nbr *= (nb - 1);
		nb--;
	}
	return (nbr);
}
int		main(void)
{
	int		nb;

	nb = 19;
	printf("%d", ft_iterative_factorial(nb));
}
