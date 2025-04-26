/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:10:33 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/26 15:27:55 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		len;

	s1 = (char *)s;
	len = ft_strlen(s);
	while (len != 0)
	{
		if (s1[len] == c)
		{
			return (s1 + len);
		}
		len--;
	}
	return (NULL);
}
/* #include <stdio.h>

int	main(void)
{
	printf("PRUEBA ft_strrchr\n");
	
	char	*resul;

	resul = ft_strrchr("ELEFANTE ", 'a');
	if (resul)
			printf("%s\n", resul);
		else
			printf("NULL!\n");
			
	return (0);
}  */