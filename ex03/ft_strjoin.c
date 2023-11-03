/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:45:00 by hanebaro          #+#    #+#             */
/*   Updated: 2023/11/03 01:49:20 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	str_cpy(char *dest, char *src, int indx)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		dest[indx++] = src[i++];
	return (indx);
}

int	max_space(char *sep, char **strs, int size)
{
	int	count;
	int	i;
	int	size_sep;

	count = 0;
	i = 0;
	size_sep = ft_strlen(sep);
	while (i < size && strs[i] != NULL)
	{
		count += ft_strlen(strs[i]) + size_sep;
		i++;
	}
	count -= size_sep;
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		count;
	int		i;

	if (size <= 0)
	{
		return ((char *)malloc(sizeof(char)));
	}
	tab = (char *)malloc(max_space(sep, strs, size) + 1);
	if (!tab)
		return (0);
	i = 0;
	count = 0;
	while (i < size)
	{
		count = str_cpy(tab, strs[i], count);
		if (i != (size - 1))
		{
			count = str_cpy(tab, sep, count);
		}
		i++;
	}
	tab[count] = '\0';
	return (tab);
}
