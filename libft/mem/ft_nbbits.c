/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 20:00:38 by iburel            #+#    #+#             */
/*   Updated: 2017/01/12 20:01:46 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbbits(unsigned long long int nb)
{
	int		i;

	i = 0;
	while (nb >> i)
		i++;
	return (i);
}
