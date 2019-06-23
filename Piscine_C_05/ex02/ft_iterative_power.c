/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 22:09:21 by tbernard          #+#    #+#             */
/*   Updated: 2019/06/23 11:42:11 by tbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	if(power < 0)
	{
		return (0);
	}
	int i;
	int res;
	i = 0;

	res = 1;
	while(i < power)
	{
		res = res * nb;	
		i++;
	}
	printf("%d", res);
	return (res);
}



int main()
{
	int n;
	int p;
	
	n = 5;
	p = 5; 

	ft_iterative_power(n, p);	



}
