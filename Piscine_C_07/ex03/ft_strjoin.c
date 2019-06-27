/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:34:45 by tbernard          #+#    #+#             */
/*   Updated: 2019/06/27 18:04:21 by tbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_full_strlen(char **strs, int size, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i++]);
		len = len + ft_strlen(sep) * (size);
		return (len);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	if (size == 0)
	{
		tab = malloc(sizeof(*tab));
		tab = "\0";
		return (tab);
	}
	tab = malloc(sizeof(char) * ft_full_strlen(strs, size, sep) + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(tab, sep);
		}
		i++;
	}
	return (tab);
}
