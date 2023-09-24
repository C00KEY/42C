/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:25:18 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/20 18:26:12 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	while (i <= size)
	{
		tab[i] = a;
		i++;
	}
}

/* int main(void)
{
  int tab[3] = { 1, 2, 3 };
  int size = 3;
  return 0;
} */