/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:35:29 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/21 17:22:36 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int a;

	a = 0;
	while (nb != a * a)
	{
		a++;
		if (nb == a * a)
		{
			return (a);
		}
		if (a >= nb)
		{
			return (0);
		}
	}
	return (0);
}

int		main(void)
{
	int nb;

	nb = 9;
	ft_sqrt(nb);
	printf("%d", ft_sqrt(nb));
	return (0);
}
