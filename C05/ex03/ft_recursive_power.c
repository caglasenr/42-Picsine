/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csener <csener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:00:56 by csener            #+#    #+#             */
/*   Updated: 2025/04/29 21:21:40 by csener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
int main()
{
    printf("%d üssü %d = %d\n",2,3,ft_recursive_power(2,3));
    printf("%d üssü %d = %d\n",0,4,ft_recursive_power(0,4));
    printf("%d üssü %d = %d\n",3,0,ft_recursive_power(3,0));
    printf("%d üssü %d = %d\n",7,-1,ft_recursive_power(7,-1));
    return 0;
}