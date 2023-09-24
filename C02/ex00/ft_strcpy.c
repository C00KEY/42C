/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:04:18 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/20 20:04:33 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/* int main(void)
{ 
  char dest[] = "abcdefghhh";
  char src[] = "Bonjour";
  printf("src = %s, dest = %s \n", src, dest);
  ft_strcpy(dest, src);
  printf("src = %s, dest = %s \n", src, dest);

  return 0;
} */
