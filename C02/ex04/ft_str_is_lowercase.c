/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:04:09 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 19:05:59 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 97) || (str[i] > 122))
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
  char str[] = "aurevoir";
  ft_str_is_lowercase(str);
  printf("%d\n", ft_str_is_lowercase(str));

  return 0;
} */