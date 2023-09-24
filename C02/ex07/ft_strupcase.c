/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:11:38 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 19:13:10 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65) || (str[i] > 90))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/* int main(void)
{ 
  char str[] = "aLibabA";
  ft_strupcase(str);
  printf("%s\n", ft_strupcase(str));

  return 0;
} */