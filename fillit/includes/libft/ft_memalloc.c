/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:28:15 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/03 20:28:51 by dpetrus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*p;
	char	*c;

	p = malloc(size);
	if (p == NULL)
		return (NULL);
	c = p;
	i = 0;
	while (i < size)
	{
		c[i] = 0;
		i++;
	}
	return (p);
}
