/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:30:43 by faacar            #+#    #+#             */
/*   Updated: 2022/02/19 11:38:06 by faacar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (src[i] && (dest_size < (size - 1)))
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest_size);
}
