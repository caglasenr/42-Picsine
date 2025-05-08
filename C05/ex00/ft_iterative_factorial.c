/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csener <csener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:41:29 by csener            #+#    #+#             */
/*   Updated: 2025/04/29 21:19:39 by csener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
#include <stdio.h>
int main()
{
    printf("%d faktöriyel sonucu = %d\n",5,ft_iterative_factorial(5));
    printf("%d faktöriyel sonucu = %d\n",0,ft_iterative_factorial(0));
    printf("%d faktöriyel sonucu = %d\n",-1,ft_iterative_factorial(-1));
    return 0;
}