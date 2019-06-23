/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:16:46 by tbernard          #+#    #+#             */
/*   Updated: 2019/06/22 22:06:28 by tbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_recursive_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = 1;

	if(nb == 0)
	{
		return (0);
	}
	else
	{
		printf(nb*ft_recursive_factorial(nb-1));
	}

}

int main(void)
{
	int n;

	n = 6;

	ft_recursive_factorial(n);

}
