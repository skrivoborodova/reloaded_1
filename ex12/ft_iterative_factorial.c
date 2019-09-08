/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oearlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:18:37 by oearlene          #+#    #+#             */
/*   Updated: 2019/09/08 22:49:51 by oearlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}
