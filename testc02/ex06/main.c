/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:45:19 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/23 13:45:56 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	s1[2] = { 127 };
	char	s2[2] = { 0 };
	char	s3[3] = { 31 };
	char	s4[4] = { 32, 55, 95 };
	char	s5[2] = {200};
	printf("< ex06 >\n");
	printf("-----------answer------------\n");
	printf("0 1 0 1 0\n");
	printf("-------------------------------\n");
	printf("%d %d %d %d %d\n", ft_str_is_printable(s1), ft_str_is_printable(s2), ft_str_is_printable(s3), ft_str_is_printable(s4), ft_str_is_printable(s5));
	printf("-----------output------------\n\n");
}
