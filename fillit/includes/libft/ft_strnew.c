/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:29:25 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/03 20:29:41 by dpetrus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char*)malloc(sizeof(*s) * (size + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
