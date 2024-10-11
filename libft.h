/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:56:09 by etina             #+#    #+#             */
/*   Updated: 2024/10/11 21:47:29 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

size_t	ft_strlen(const char *s);
void	ft_memset(void *b, int c, size_t len);
int		ft_isprint(int c);
int		ft_isdigit(int i);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

#endif