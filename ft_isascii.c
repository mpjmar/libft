/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:04:15 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/27 16:49:39 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/* int main(void)  
{
	printf("PRUEBA ft_isascii\n");
	
	char c;
	char resul;

	c = 'n'; 
	if (ft_isascii(c))
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