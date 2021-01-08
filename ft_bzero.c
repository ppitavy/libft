/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 07:37:53 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/08 02:59:17 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned	char	*cpy;
	unsigned	int		j;

	j = 0;
	cpy = (unsigned char *)s;
	while (n > 0)
	{
		cpy[j] = 0;
		j++;
		n--;
	}
}
