/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:55:28 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/19 18:43:33 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (*(str + i))
	{
		a = *(str + i);
		write(1, &a, 1);
		i++;
	}
}	
