/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oearlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 02:54:53 by oearlene          #+#    #+#             */
/*   Updated: 2019/09/05 03:01:55 by oearlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if (nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		res = 1;
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
