/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 05:38:59 by hanebaro          #+#    #+#             */
/*   Updated: 2023/11/02 19:31:09 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;
	int	j;

	if (max <= min)
		return (0);
	len = max - min;
	i = min;
	j = 0;
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
