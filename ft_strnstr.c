/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:43:37 by etina             #+#    #+#             */
/*   Updated: 2024/10/14 13:14:12 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (haystack && haystack[0] == '\0' && needle[0] != '\0')
		return (NULL);
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] != needle[0] || i < len)
	{
		c = 0;
		while (haystack[i + c] == needle[c] && i + c < len)
		{
			if (needle[c + 1] == '\0' || haystack[i + c + 1] == '\0')
			{
				if (needle[c + 1] != '\0')
					break ;
				return ((char *)haystack + i);
			}
			c++;
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char *l[2];
// 	l[0] = NULL;
// 	l[1] = "";

// 	int len = 0;
// 	printf("my: %s\n", ft_strnstr(l[0], l[1], len));
// 	printf("original: %s\n", strnstr(l[0], l[1], len));
// }