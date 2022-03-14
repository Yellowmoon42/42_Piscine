/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:06:15 by faacar            #+#    #+#             */
/*   Updated: 2022/02/26 23:06:18 by faacar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	n;

	n = 0;
	ptr = malloc(sizeof(int *) * (max - min));
	if (max <= min || ptr == NULL)
	{
		ptr = NULL;
		return (ptr);
	}
	while (min < max)
		ptr[n++] = min++;
	return (ptr);
}
