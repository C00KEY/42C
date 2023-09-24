/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:14:42 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 19:15:17 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 97) || (str[i] > 122))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/* int main(void)
{ 
  char str[] = "aLibabA";
  ft_strlowcase(str);
  printf("%s\n", ft_strlowcase(str));

  return 0;
} */