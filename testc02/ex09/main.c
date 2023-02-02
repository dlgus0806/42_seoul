/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:26:51 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/25 18:29:38 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);
int	main(void)
{
	printf("< ex09 >\n");
	printf("-----------answer------------\n");
	printf("Salut, Co+Mm+Ent Tu Vas ? 42mots Quara+Te-Deux; Cinquante+Et+Un\n");
	printf("-------------------------------\n");
	char	ex09[100] = "Salut, co+mm+ent tu vas ? 42mots quARa+te-deux; cINQuante+et+un";
	printf("%s\n", ft_strcapitalize(ex09));
	printf("-----------output------------\n\n");
}
