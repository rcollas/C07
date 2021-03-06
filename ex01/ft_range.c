/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:10:41 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/28 10:22:01 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(tab) * (max - min))))
		return (0);
	while (max > min)
	{
		tab[i++] = min++;
	}
	return (tab);
}
