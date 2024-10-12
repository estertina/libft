/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:22:22 by etina             #+#    #+#             */
/*   Updated: 2024/10/12 23:40:03 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	c;
	int	first;

	i = 0;
	c = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (needle[i] != haystack[i] && haystack[i] != '\0')
	{
		while (needle[c] == haystack[i] && haystack[i] != '\0')
		{
			if (c == 0)
				first = i;
			c++;
			i++;
			if (needle[c] == '\0')
				return ((char *)haystack + first);
		}
		i++;
	}
	return (NULL);
}
