/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oearlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 03:34:23 by oearlene          #+#    #+#             */
/*   Updated: 2019/09/09 23:53:57 by oearlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int res;

	res = 0;
	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb / 2)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
}

int	main(void)
{
	clock_t tic = clock();

	printf("Sq -1523 donne %d\n", ft_sqrt(-101));
	printf("0 donne %d\n", ft_sqrt(0));
	printf("214748364 donne %d\n", ft_sqrt(214748364));
	printf("268435456 donne %d\n", ft_sqrt(268435456));
	printf("134167199 donne %d\n", ft_sqrt(134167199));
	printf("90935296 donne %d\n", ft_sqrt(90935296));
	printf("92260 donne %d\n", ft_sqrt(92260));
	printf("716632900 donne %d\n", ft_sqrt(716632900));
	printf("62904750  donne %d\n", ft_sqrt(62904750));
	printf("1545040249 donne %d\n", ft_sqrt(1545040249));
	printf("70765342 = %d\n", ft_sqrt(70765342));
	printf("68807025 = %d\n", ft_sqrt(68807025));
	printf("46629167 = %d\n", ft_sqrt(46629167));

   clock_t toc = clock();

	printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);

	return (0);
}
