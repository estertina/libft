/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:42:35 by etina             #+#    #+#             */
/*   Updated: 2024/10/10 14:02:34 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int i)
{
    if(i >= '0' && i <= '9')
    {
        return 1;
    } else {
        return 0;
    }
}
