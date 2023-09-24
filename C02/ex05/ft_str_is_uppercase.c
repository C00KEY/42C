/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:06:58 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 19:08:41 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65) || (str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	if (i == 0)
	{
		return (0);
	}
	return (1);
}

/* int main(void)
{ 
  char str[] = "A";
  ft_str_is_uppercase(str);
  printf("%d\n", ft_str_is_uppercase(str));

  return 0;
} */