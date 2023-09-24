/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:14:54 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/24 19:48:43 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;
	
	i = 0;
	while ((s1[i]) && (i < n))
	{
		j = s1[i] - s2[i];
		
		if (j > 0)
			return (j);
		else
			return (j);
		i++;
	}
	return (j);
}

int main(void)
{
	char	s1[] = "afz";
	char	s2[] = "gdg";
	int n = 5;
	
	ft_strncmp(s1, s2, n);
	printf("%d \n", ft_strncmp(s1, s2, n));
	
	return (0);
}
