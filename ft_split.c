/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:49:49 by etina             #+#    #+#             */
/*   Updated: 2024/10/26 21:43:33 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			s++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_cpy(char const *s, char c, int *pos)
{
	int		length;
	char	*word;

	length = 0;
	length = *pos;
	while (s[length] && s[length] != c)
		length++;
	word = malloc(((length - *pos) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + *pos, (length - *pos) + 1);
	*pos = length;
	return (word);
}

static void	ft_free(char **arr, int i)
{
	while (i > 0)
	{
		free(arr[i - 1]);
		i--;
	}
	free (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[pos])
	{
		if (s[pos] != c)
		{
			arr[i] = ft_cpy(s, c, &pos);
			if (!arr[i])
				return (ft_free(arr, i - 1), NULL);
			i++;
		}
		else
			pos++;
	}
	arr[i] = NULL;
	return (arr);
}