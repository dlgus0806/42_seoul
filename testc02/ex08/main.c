/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:06:57 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/23 14:07:43 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);
int	main(void)
{
	printf("< ex08 >\n");
	printf("-----------answer------------\n");
	printf("this is made by <haejokim>\n");
	printf("-------------------------------\n");
	char	made1[100] = "This is Made by <haejokim>";
	printf("%s\n", ft_strlowcase(made1));
	printf("-----------output------------\n\n");
}
