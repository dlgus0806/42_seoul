/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:26:06 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/18 15:03:22 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_a;

	reverse_a = 'z';
	while (reverse_a >= 'a')
	{
		write(1, &reverse_a, 1);
		reverse_a--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
