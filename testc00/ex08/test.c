/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:52:38 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/22 16:08:42 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_arr(int i, char arr[i], int n)
{
	i = 0;
	while (i < n)
	{
		write(1, arr[i], 1);
		write(1, ", ", 2);
		i++;
	}
}

void	ft_check2(int l, int s, int arr[i], int n)
{
	while (s <= n)
	{
		arr[l] = s + '0';
		s++;
		l++;
		ft_check2(l, s arr, n);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	l;
	int	s;

	l = 0;
	s = 0;
	char arr[9];
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
	if (l == n)
	{
		print_arr(i, arr, n);
		return ;
	}
	else
	{
		ft_check2(l, s, arr);
		ft_print_combn(n);
	}
}

int main(void)
{
	ft_print_combn(3);
}
