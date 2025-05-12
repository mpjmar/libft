/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:19:15 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/29 19:38:43 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (!s && !d)
	{
		return (NULL);
	}
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	printf("PRUEBA ft_memcpy\n");
	
	char	src[] = "hola";
	char	dest[5] = "";

	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}  */