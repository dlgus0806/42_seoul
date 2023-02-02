/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:48:48 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/25 18:48:48 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	make_lower(int i, char *str)
{
	if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
		|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			str[i] += 32;
	else if (str[i - 1] >= '0' && str[i - 1] <= '9')
		str[i] += 32;
}

void	make_upper(int i, char *str)
{
	if ((!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		&& (!(str[i - 1] >= '0' && str[i - 1] <= '9')))
		str[i] -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0' && str[i] >= 32 && str[i] <= 126)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			make_lower(i, str);
		else if (str[i] >= 'a' && str[i] <= 'z')
			make_upper(i, str);
		i++;
	}
	return (str);
}
