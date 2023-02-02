/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:45:48 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/19 15:47:47 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	put_char(char c)
{
	write(1, &c, 1);
}

i = -1;
void	again(int i, int j)
{
	while (i < n)
	{
		while (i <= 8)
		{
			i++;
			j = i + 1;
			while (j <= 9)
			{
				again(j % 10 + '0');
				j++;
				put_char(',');
				put_char(' ');
			}
		}
	}



void	checknum2(int i, int j)
{
	while (i <= 8)
	{
		i += 1;
		j = i + 1;
		while (j <= 9)
		{
			put_char(i % 10 + '0');
			put_char(j % 10 + '0');
			j++;
			put_char(',');
			put_char(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (n == 1)
	{
		while (j <= 9)
		{
			put_char(j % 10 + '0');
			j++;
			put_char(',');
			put_char(' ');
		}
	}	
	if (n >= 2)
	{
		checknum2(i, j);
	}
}

int	main(void)
{
	ft_print_combn(2);
}
