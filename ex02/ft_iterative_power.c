/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 19:46:35 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/20 19:53:42 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int res;
	int h;

	h = 1;
	res = nb;
	if(power < 0)
	{
		return (0);
	}
	while(h != power)
	{
		res *= nb;
		h++;
	}
	return (res);
}

int		main(void)
{
	int nb;
	int power;

	nb = 4;
	power = 8;
	ft_iterative_power(nb, power);
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
