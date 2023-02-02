/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:41:57 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/23 13:42:26 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("< ex05 >\n");
	printf("-----------answer------------\n");
	printf("1 1 0\n");
	printf("-------------------------------\n");
	printf("%d %d %d\n", ft_str_is_uppercase("ASDFADFREGTHQFOZ"), ft_str_is_uppercase(""), ft_str_is_uppercase("ASFR13Das"));
	printf("-----------output------------\n\n");
}

