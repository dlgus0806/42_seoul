/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:07:22 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/16 18:58:17 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_changenum(int i, int j)
{
	put_char(i / 10 + '0');
	put_char(i % 10 + '0');
	put_char(' ');
	put_char(j / 10 + '0');
	put_char(j % 10 + '0');
	if (i != 98)
	{
		put_char(',');
		put_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_changenum(i, j);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
