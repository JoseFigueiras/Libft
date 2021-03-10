/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 19:17:37 by jfigueir          #+#    #+#             */
/*   Updated: 2021/03/10 19:17:38 by jfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	t_uint	i;

	ptr = malloc(num * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < num)
	{
		((int*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
