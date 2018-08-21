/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:53:29 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/21 11:30:43 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{

	int res;

	if(power == 0)
	{
		return (1);
	}
	if(power < 1)
	{
		return (0);
	}
	return (res = nb * ft_recursive_power(nb, power - 1));
}

int		main(void)
{
	int nb;
	int power;

	nb = 4;
	power = 4;
	ft_recursive_power(nb, power);
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
