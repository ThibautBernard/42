/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 22:10:27 by tbernard          #+#    #+#             */
/*   Updated: 2019/06/22 16:40:34 by tbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}


int		ft_atoi(char *str)
{
	int i; 
	int num = 0;
	int sign = 1;
	
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}

	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}

	return (sign*num);

}


int main(void)
{
	char tab[] = "     +--+-+6262d555";
	printf("%d\n", ft_atoi(tab));
	

}
