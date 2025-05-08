/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csener <csener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:56:56 by csener            #+#    #+#             */
/*   Updated: 2025/04/21 17:24:34 by csener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
#include <stdio.h>
int main()
{
    int a= 27;
    int b = 3;
     ft_ultimate_div_mod(&a,&b);
     printf("%d , %d\n",a, b);
     return 0;
    
}