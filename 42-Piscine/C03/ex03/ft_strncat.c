/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:15:43 by faacar            #+#    #+#             */
/*   Updated: 2022/02/20 01:18:03 by faacar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	sri;
	unsigned int	dei;

	dei = 0;
	sri = 0;
	while (dest[dei] != '\0')
	{
		dei++;
	}
	while (sri < nb && src[sri] != '\0')
	{
		dest[dei + sri] = src[sri];
		sri++;
	}
	dest[dei + sri] = '\0';
	return (dest);
}
