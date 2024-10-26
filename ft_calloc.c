/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:30:07 by etina             #+#    #+#             */
/*   Updated: 2024/10/26 17:09:00 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	char		*str;

	i = 0;
	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
