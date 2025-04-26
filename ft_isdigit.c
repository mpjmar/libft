/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:34:35 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/26 15:25:04 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/* int main(void)
{
	printf("PRUEBA ft_isdigit\n");
	
	char c;
	char resul;

	c = 'a';
	if (ft_isdigit(c))
	{
		resul = '1';
	}
	else
	{
		resul = '0';
	}
	write(1, &resul, 1);
	write(1, "\n", 1);
} */
