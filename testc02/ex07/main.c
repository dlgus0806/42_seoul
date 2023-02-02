/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:59:03 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/23 13:59:52 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str);
int	main(void)
{
	char	made[100] = "This is Made by <haejokim>";
	printf("< ex07 >\n");
	printf("-----------answer------------\n");
	printf("THIS IS MADE BY <HAEJOKIM>\n");
	printf("-------------------------------\n");
	printf("%s\n", ft_strupcase(made));
	printf("-----------output------------\n\n");
}
