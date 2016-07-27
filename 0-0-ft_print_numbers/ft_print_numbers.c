/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 14:59:00 by cdethan           #+#    #+#             */
/*   Updated: 2016/07/24 15:07:06 by cdethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_numbers(int i)
{
	i = 0;
	while(i <= 9)
	{
	ft_putchar(i + '0');
	i++;
	}
}
int		main(void)
{
	char c;
	int i;
	ft_putchar(c);
	ft_print_numbers(i);
}
