/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:10:38 by faacar            #+#    #+#             */
/*   Updated: 2022/02/13 04:13:42 by faacar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			write(1, " ", 1);
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
