/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oearlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:14:43 by oearlene          #+#    #+#             */
/*   Updated: 2019/09/08 18:55:27 by oearlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;
	while (tab[count1])
	{
		if (f(tab[count1]))
			count2++;
		count1++;
	}
	return (count2);
}
