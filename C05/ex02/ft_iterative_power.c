/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csener <csener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:47:56 by csener            #+#    #+#             */
/*   Updated: 2025/04/29 21:21:08 by csener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
#include <stdio.h>
int main()
{
    printf("%d üssü %d = %d\n",2,3,ft_iterative_power(2,3));
    printf("%d üssü %d = %d\n",0,4,ft_iterative_power(0,4));
    printf("%d üssü %d = %d\n",3,0,ft_iterative_power(3,0));
    printf("%d üssü %d = %d\n",7,-1,ft_iterative_power(7,-1));
    return 0;
}