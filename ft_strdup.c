/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:23:23 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/05 19:37:04 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;

	s1 = malloc(ft_strlen(s) + 1);
	if (s1 == NULL)
		return (NULL);
	ft_strlcpy(s1, s, ft_strlen(s) + 1);
	return (s1);
}

/* #include <stdio.h>

int	main(void)
{
	printf(""PRUEBA ft_strdup\n"")

	char *resul = ft_strdup("sadfvbf");
	
	printf("%s\n", resul);
	
	return (0);
} */
