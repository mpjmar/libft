/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:53:31 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/26 15:24:23 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/* int main(void)
{
	printf("PRUEBA ft_isalpha\n");
	
	char c;
	char resul;

	c = 'A';
	if (ft_isalpha(c))
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