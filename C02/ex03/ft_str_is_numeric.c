/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:57 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 19:03:22 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 48) || (str[i] > 57))
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
  char str[] = "0123456789";
  ft_str_is_numeric(str);
  printf("%d\n", ft_str_is_numeric(str));

  return 0;
} */
