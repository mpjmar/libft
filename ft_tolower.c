/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:26:04 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/26 15:28:17 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 65 && c < 90)
	{
		return (c + 32);
	}
	return (c);
}

/* #include <stdio.h>

int	main(void)
{
	printf("PRUEBA ft_tolower\n");
	int	resul;
	
	resul = ft_tolower('C');
	printf("%d\n", resul);
	
	return (0);
} */
