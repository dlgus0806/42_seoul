/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:28 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/25 18:05:38 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str);

int main()
{
	printf("< ex11 >\n");
	printf("-----------answer------------\n");
	printf("Coucou\\0atu vas bien ?\n");
	printf("\\c8\\7f\n");
	printf("-------------------------------\n");
	ft_putstr_non_printable("Concou\ntu vas bien ?");
	write(1, "\n", 1);
	char aa[3] = { 200, 127, 0};
	ft_putstr_non_printable(aa);
	printf("\n");
	printf("-----------output------------\n\n");
}
