/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:14:01 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/20 18:15:03 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* int main(void)
{
  int a, b;

  a = 1;
  b = 2;
  ft_swap(&a, &b);
  printf("a = %d, b = %d", a, b);

  return 0; 
} */