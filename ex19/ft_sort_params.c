/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oearlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 04:10:26 by oearlene          #+#    #+#             */
/*   Updated: 2019/09/06 02:27:29 by oearlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *t;

	t = *a;
	*a = *b;
	*b = t;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	int res;
	
	ac = 2;
		while (av[ac] && av[ac - 1])
		{
			res = ft_strcmp(av[ac - 1], av[ac]);
			if (res > 0)
			{
				ft_swap(&av[ac - 1], &av[ac]);
				ac = 1;
			}
			ac++;
		}
		ac = 1;
		while (av[ac])
		{
			ft_putstr(av[ac]);
			ft_putchar('\n');
			ac++;
		}
	
		return (0);
}
