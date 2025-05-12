/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:19:17 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/27 16:49:49 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/* int main(void)
{
	printf("PRUEBA ft_isprint\n");
	char c;
	char resul;

	c = 'x';
	if (ft_isprint(c))
	{
		resul = '1';
	}
	else 
	{
		resul = '0';
	}
	write(1, &resul, 1);
	write(1, "\n", 1);

	return (0);
} */
