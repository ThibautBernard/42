/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 19:52:21 by tbernard          #+#    #+#             */
/*   Updated: 2019/06/22 22:09:00 by tbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int		ft_iterative_factorial(int nb)
{
	int f = 1;
	int i;
	
	if (nb == 0)
	{
		return (0);
	}

	i = 1;
	while(i <= nb)
	{
		f = f*i;
		i++;
	}
	printf("%d", f);
	return (f);


}

int main(void)
{
	int n;
	n = 12;

	ft_iterative_factorial(n);

}
