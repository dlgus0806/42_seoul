unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:45:34 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/25 17:47:03 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char src[10] = "hello";
	char	d5[10] = "abcabcabc";
	char	d6[10] = "abcabcabc";
	char	d7[10] = "abcabcabc";
	char	d8[10] = "abcabcabc";
	unsigned	int lcpy_return;
	printf("< ex10 >\n");
	printf("-----------answer------------\n");
	lcpy_return = strlcpy(d5, src, 3);
	printf("%d\n", lcpy_return);
	printf("%s\n", d5);
	printf("%s\n", &d5[6]);
	lcpy_return = strlcpy(d6, src, 8);
	printf("%d\n", lcpy_return);
	printf("%s\n", d6);
	printf("%s\n", &d6[6]);
	printf("-------------------------------\n");
	lcpy_return = strlcpy(d7, src, 3);
	printf("%d\n", lcpy_return);
	printf("%s\n", d7);
	printf("%s\n", &d7[6]);
	lcpy_return = strlcpy(d8, src, 8);
	printf("%d\n", lcpy_return);
	printf("%s\n", d8);
	printf("%s\n", &d8[6]);
	printf("-----------output------------\n\n");
}
