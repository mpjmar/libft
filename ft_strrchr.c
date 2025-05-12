/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:10:33 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/02 14:07:08 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*s1;
	int				len;
	unsigned char	c1;

	s1 = (char *)s;
	len = ft_strlen(s1);
	c1 = (unsigned char)c;
	if (len + 1 == c1)
		return (s1 + len + 1);
	while (len >= 0 && c1 <= 127)
	{
		if (s1[len] == c1)
			return (s1 + len);
		len--;
	}
	return (NULL);
}
/* #include <stdio.h>

int	main(void)
{
	printf("PRUEBA ft_strrchr\n");
	
	char	*resul;

	resul = ft_strrchr("teste", 'x');
	if (resul)
			printf("%s\n", resul);
		else
			printf("NULL!\n");
			
	return (0);
}  */