/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:39:19 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/20 18:38:36 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	}
	else
	{	
		c = 'N';
		write(1, &c, 1);
	}
}

/*
int main(void)
{
	int n;

	n = 1;
        ft_is_negative(n);
	n = -1;
       	ft_is_negative(n);
	n = 0;
       	ft_is_negative(n);

        return 0;
}
*/
