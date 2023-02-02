/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:20:23 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/23 13:21:13 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *src);
int	main()
{
	printf("< ex02 >\n");
	printf("-----------answer------------\n");
	printf("1 1 0\n");
	printf("-------------------------------\n");
	printf("%d %d %d\n", ft_str_is_alpha("afwrA"), ft_str_is_alpha(""), ft_str_is_alpha("asA \n"));
	printf("-----------output------------\n\n");
}

