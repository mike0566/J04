/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:31:13 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/21 15:00:39 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if(index < 0)
	{
		return (-1);
	}
	if(index == 0)
	{
		return (0);
	}
	if(index == 1 || index == 2)
	{
	return (1);
	}
	else
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int		main(void)
{
	int index;

	index = 7;
	ft_fibonacci(index);
	printf("%d", ft_fibonacci(index));
	return (0);
}
