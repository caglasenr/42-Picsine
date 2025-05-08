/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csener <csener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:57:29 by csener            #+#    #+#             */
/*   Updated: 2025/04/29 21:20:38 by csener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
#include <stdio.h>
int main()
{
    printf("%d faktöriyel sonucu = %d\n",6,ft_recursive_factorial(6));
    printf("%d faktöriyel sonucu = %d\n",0,ft_recursive_factorial(0));
    printf("%d faktöriyel sonucu = %d\n",-1,ft_recursive_factorial(-1));
    return 0;
}