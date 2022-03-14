/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:25:14 by faacar            #+#    #+#             */
/*   Updated: 2022/02/13 02:44:04 by faacar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	birler;
	char	onlar;
	char	yuzler;

	yuzler = '0';
	while (yuzler <= '7')
	{
		onlar = yuzler + 1;
		while (onlar <= '8')
		{
			birler = onlar + 1;
			while (birler <= '9')
			{
				write(1, &yuzler, 1);
				write(1, &onlar, 1);
				write(1, &birler, 1);
				if (yuzler != '7' || onlar != '8' || birler != '9')
					write(1, ", ", 2);
				birler++;
			}
			onlar++;
		}
		yuzler++;
	}
}
