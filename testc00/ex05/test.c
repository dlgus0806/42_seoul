/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:43:58 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/22 13:44:01 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print_arr(char arr[3]){
	for (int i = 0; i < 3; i++)
	{
		printf("%c", arr[i]);
	}
	printf(" ");
}
void f(int l, int s, char arr[3])
{
	if (l == 3){
		print_arr(arr);
		return;
	}
	while (s <= 9)
	{
		arr[l] = s + '0';
		f(l+1, s+1, arr);
		s++;
	}
}

int main(){
	char arr[3];
	for (int i = 0; i < 3; i++)
	{
		arr[i] = 0;
	}
	f(0,0,arr);
}

