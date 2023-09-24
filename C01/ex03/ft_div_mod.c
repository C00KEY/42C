/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:31 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/20 18:16:51 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

/* int	main(void)
{
  int	a;
  int	b;
  int	mod;
  int	div;

  mod = 0;
  div = 0;
  a = 16;
  b = 4;
  
  ft_div_mod(a, b, &div, &mod);
  printf("%d, %d", mod, div);

  return 0;
} */