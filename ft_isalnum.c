/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:50:55 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/26 15:24:03 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/* int main(void)
{
	printf("PRUEBA ft_isalnum\n");
	
	char c;
	char resul;

	c = '*';
	if (isalnum(c))
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
