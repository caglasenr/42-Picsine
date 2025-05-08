/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csener <csener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:09:52 by csener            #+#    #+#             */
/*   Updated: 2025/04/20 15:51:26 by csener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 1;
	while (index < size)
	{
		if (tab[index] < tab[index - 1])
		{
			temp = tab[index];
			tab[index] = tab[index - 1];
			tab[index - 1] = temp;
			index = 1;
		}
		else
		{
			index++;
		}
	}
}
