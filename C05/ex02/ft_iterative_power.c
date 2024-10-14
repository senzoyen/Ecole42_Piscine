/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokdag <agokdag@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:03:37 by agokdag           #+#    #+#             */
/*   Updated: 2022/09/04 09:46:14 by agokdag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iteractive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return(1);
	}
	while (power-- > 0)
	{
		res = res * nb;
	}
		return (res);
}
#include <stdio.h>
int	main(void)
{
	int x;
	int y;

	x = 2;
	y = 6;
	printf("%i", ft_iteractive_power(x, y));
}
