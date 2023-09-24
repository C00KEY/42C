/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:53:37 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/19 18:56:11 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (src[i])
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}

/* int main(void)
{ 
  unsigned int n;
  char dest[] = "Aurevoir";
  char src[] = "Bonjour";

  n = 1;
  printf("src = %s, dest = %s \n", src, dest);
  ft_strncpy(dest, src, n);
  printf("src = %s, dest = %s \n", src, dest);

  return 0;
} */
