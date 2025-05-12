/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:00:37 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/12 16:51:37 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			words++;
			i = 1;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (words);
}

static char	*build_string(char const *s, int start, int end)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc((end - start + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (start < end)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

char	**ft_split(char const *s, char c)
{
	char	**resul;
	int		start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	start = -1;
	resul = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!resul || !s)
		return (NULL);
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && start >= 0)
		{
			resul[j++] = build_string(s, start, i);
			start = -1;
		}
		i++;
	}
	resul[j] = 0;
	return (resul);
}

/* #include <stdio.h>

int	main(void)
{
	int 	i = 0;
	char	**resul;
	
	printf("PRUEBA ft_split\n");
	resul = ft_split("este es el string que quiero separar", ' ');
	
	while (resul[i])
	{
		printf("%s\n", resul[i]);
		free(resul[i]);
		i++;
	}
	free(resul);
	return (0);
} */