/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:29:25 by maria-j2          #+#    #+#             */
/*   Updated: 2025/04/26 15:27:34 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < (int)n)
		i++;
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>

int	main(void)
{
	printf("PRUEBA ft_strncmp\n");
	
	int resul;
	
	resul = ft_strncmp("aaabbb ", "aaaccc", 4);
	printf("%d\n", resul);
	
	return (0);
} */
