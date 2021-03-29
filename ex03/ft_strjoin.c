/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 08:52:12 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/29 14:13:50 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_strlen(char **strs, char *sep, int size)
{
	int i;
	int j;
	int dest_size;
	int sep_len;

	i = 0;
	j = 0;
	dest_size = 0;
	while (sep[i])
		i++;
	sep_len = i;
	i = 0;
	while (i < size)
	{
		while (strs[i][j])
			j++;
		dest_size += j + sep_len;
		j = 0;
		i++;
	}
	return (dest_size);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *final_str;
	int dest_size;
	int i;

	i = 0;
	dest_size = ft_ultimate_strlen(strs, sep, size);
	if (size == 0)
		return (final_str = 0);
	if (!(final_str = (char *)malloc(sizeof(final_str) * dest_size + 1)))
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(final_str, strs[i]);
		if (i + 1 != size)
			ft_strcat(final_str, sep);
		i++;
	}
	return (final_str);
}
