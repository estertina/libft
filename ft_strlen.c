/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:50:49 by etina             #+#    #+#             */
/*   Updated: 2024/10/10 12:03:10 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strlen(char* str)
{
    int i; 
    i = 0;

    while (str[i] != '\0')
    {
        i++;
    } return i;
}