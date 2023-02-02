/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:34:46 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/23 13:35:45 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *src);

int	main(void)
{
	printf("< ex03 >\n");
	printf("-----------answer------------\n");
	printf("1 1 0\n");
	printf("-------------------------------\n");
	printf("%d %d %d\n", ft_str_is_numeric(""), ft_str_is_numeric("123413499"), ft_str_is_numeric("124\n"));
	printf("-----------output------------\n\n");
}
