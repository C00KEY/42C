/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:09:29 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 19:10:40 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 21) || (str[i] == 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main(void)
{ 
  char str[] = "AU";
  ft_str_is_printable(str);
  printf("%d\n", ft_str_is_printable(str));

  return 0;
} */