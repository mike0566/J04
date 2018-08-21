/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:22:54 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/20 18:20:40 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if(nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial (nb -1));
}

int		main(void)
{
	int		nb;

	nb = 5;
	ft_recursive_factorial(nb);
	printf("%d", ft_recursive_factorial(nb));
}
