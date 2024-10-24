/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:07:55 by etina             #+#    #+#             */
/*   Updated: 2024/10/24 19:51:42 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	else if (n == 0)
		count++;
	else
	{
		while (n != 0)
		{
			n = n / 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = count_len(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	
	while (len >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	(void)i;
// 	printf("address of uninitialized pointer: %p\n", str);
// 	str = ft_itoa(123);
// 	printf("address of returned pointer: %p\n", str);
// 	printf("string of char pointer: %s\n", str);
// 	// printf("value of integer: %d\n", i);
// 	return (0);
// }
