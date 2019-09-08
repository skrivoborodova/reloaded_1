/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oearlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 07:19:00 by oearlene          #+#    #+#             */
/*   Updated: 2019/09/06 07:22:17 by oearlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ar;
	int i;

	if (min >= max)
		return (NULL);
	ar = (int *)malloc(sizeof(*ar) * (max - min));
	i = 0;
	while (min < max)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
