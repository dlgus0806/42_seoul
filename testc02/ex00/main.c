/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:51:52 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/23 12:54:49 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	//ex00
	char dest[6];
	char src[6] = "Hello";
	printf("< ex00 >\n");
	printf("-----------answer------------\n");
	strcpy(dest, src);
	printf("%s\n", dest);
	printf("-------------------------------\n");
	char d[6];
	ft_strcpy(d, src);
	printf("%s\n", d);
	printf("-----------output------------\n\n");
}
