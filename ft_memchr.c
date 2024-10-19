/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:43:18 by etina             #+#    #+#             */
/*   Updated: 2024/10/19 21:09:51 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return ((void *) NULL);
}

// int	main(void)
// {
// 	// size_t n;
// 	// const char *str = "helloiamstring";
// 	// int c;

// 	// printf("mine: %s\n", ft_memset("helloiamstring", 'i', 5));
// 	// printf("orig: %s\n", memset("helloiamstring", 'i', 5));

// 	ft_memchr(((void *)0), '\0', 0x20);
// }
