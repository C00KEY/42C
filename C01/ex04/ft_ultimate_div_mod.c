/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:17:12 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/20 18:19:29 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a % *b;
	*b = c / *b;
}

/* int main(void)
{
  int a, b;

  a = 16;
  b = 4;
  
  ft_ultimate_div_mod(&a, &b);
  printf("%d, %d", a, b);

  return 0;
} */