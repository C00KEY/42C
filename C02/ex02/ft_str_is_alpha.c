/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:58:15 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 19:00:28 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65) || ((str[i] > 90) && (str[i] < 97)) || (str[i] > 122))
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
  char str[] = "Aurevoir";
  ft_str_is_alpha(str);
  printf("%d\n", ft_str_is_alpha(str));

  return 0;
} */