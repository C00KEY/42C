/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:50:36 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/24 19:41:50 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;
	
	i = 0;
	while (s1[i])
	{
		j = s1[i] - s2[i];
		
		if (j > 0)
			return (j);
		if (j < 0)
			return (j);
		i++;
	}
	return (j);
}

int main(void)
{
	char	s1[] = "aza";
	char	s2[] = "azz";
	ft_strcmp(s1, s2);
	printf("%d \n", ft_strcmp(s1, s2));
	
	return (0);
}
