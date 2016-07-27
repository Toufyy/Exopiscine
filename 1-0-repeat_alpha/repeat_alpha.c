/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 01:27:41 by cdethan           #+#    #+#             */
/*   Updated: 2016/07/27 01:48:52 by cdethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_pustr(char *str)
{
	int i;
	i = 0;
	while(str[i])
		ft_putchar(str[i]);
}
void	ft_position
