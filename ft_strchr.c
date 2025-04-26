/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:16:29 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/26 15:26:31 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *)s;
	while (*s1)
	{
		if (*s1 == c)
			return (s1);
		s1++;
	}
	if (c == '\0')
		return (s1);
		
	return (NULL);
}
/* 
int	main(void)
{
	printf("PRUEBA ft_strchr\n");
	
	char	*resul;

	resul = ft_strchr("ELEFANTE ", 'a');
	if (resul)
			printf("%s\n", resul);
		else
			printf("NULL!\n");
			
	return (0);
}  */
