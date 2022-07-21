/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:25:29 by aarchtou          #+#    #+#             */
/*   Updated: 2022/07/21 20:39:21 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcher(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb2(void)
{
	int a;
	int b;

		a = -1;
	while (a++ < 98)
	{
		b = a;
			while (b++ < 99)
			{
				ft_putcher(( a / 10) + '0');
				ft_putcher( (a % 10) + '0');
				ft_putcher((' '));
				ft_putcher((b / 10) + '0');
				ft_putcher((b % 10) + '0');
				if (a != 98)
				{
					ft_putcher(',');
					ft_putchar(' ');
				}
			}
	}
}
int main()
{
	ft_putchar();
	return (0);
}
