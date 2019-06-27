/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:41:52 by tbernard          #+#    #+#             */
/*   Updated: 2019/06/27 15:30:20 by tbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int x;
	int i;

	i = 0;
	x = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = malloc(sizeof(int) * x);
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
