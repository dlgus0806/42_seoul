/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:46:28 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/25 16:50:30 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
	char src[10] = "zzzxxxccc";
	char d1[10] = "abcabcabc";
	char d2[10] = "abcabcabc";
	char d3[10] = "abcabcabc";
	char d4[10] = "abcabcabc";
	printf("< ex01 >\n");
	printf("-----------answer------------\n");
	strncpy(d1, src, 3); //src보다 작은 사이즈가 주어질 때 널이 없음!
	printf("%s\n", d1);
	printf("%s\n", &d1[6]);
	strncpy(d2, src, 8);
	printf("%s\n", d2);
	printf("%s\n", &d2[8]); //null이 다 채워졌는지 체크
	printf("바로 위의 값은 무시. 문제 정의 상에서는 null로 채워져 프린트되지 않아야함\n");
	printf("-------------------------------\n");
	ft_strncpy(d3, src, 3);
	printf("%s\n", d3);
	printf("%s\n", &d3[6]);
	ft_strncpy(d4, src, 8);
	printf("%s\n", d4);
	printf("%s\n", &d4[8]);
	printf("-----------output------------\n\n");
}
