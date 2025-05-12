/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:12:19 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/29 18:02:40 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;

	mem = s;
	while (n--)
		*mem++ = (unsigned char)c;
	return (s);
}

/* #include <stdio.h>

int	main(void)
{
	printf("PRUEBA ft_memset\n");
	
	unsigned char	s[8];
	int	c;
	
	c = 42;
	ft_memset(s, c, 6);
	printf("%s\n", s);
}  */