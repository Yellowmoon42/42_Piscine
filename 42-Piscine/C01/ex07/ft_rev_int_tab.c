/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:56:03 by faacar            #+#    #+#             */
/*   Updated: 2022/02/15 02:57:54 by faacar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	artan;
	int	azalan;
	int	rev;

	artan = 0;
	azalan = size - 1;
	while (artan < (size / 2))
	{
		rev = tab[azalan];
		tab[azalan] = tab[artan];
		tab[artan] = rev;
		artan++;
		azalan--;
	}
}
