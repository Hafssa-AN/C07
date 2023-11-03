/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 07:29:53 by hanebaro          #+#    #+#             */
/*   Updated: 2023/11/03 00:28:11 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ln;
	int	i;

	ln = max - min;
	if (ln <= 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(ln * sizeof(int));
	if (!(*range))
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < ln)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (ln);
}
