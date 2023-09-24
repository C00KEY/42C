/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombell <mcombell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:16:24 by mcombell          #+#    #+#             */
/*   Updated: 2023/09/20 20:00:35 by mcombell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (str[i])
	{
		if ((str[i] < 65) || ((str[i] > 90) && (str[i] < 97)) || (str[i] > 122))
		{
			compteur = 0;
		}
		else
		{
			if (((str[i] < 65) || (str[i] > 90)) && (compteur == 0))
				str[i] = str[i] - 32;
			if (((str[i] < 97) || (str[i] > 122)) && (compteur != 0))
				str[i] = str[i] + 32;
			compteur++;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{ 
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", ft_strcapitalize(str));

	return (0);
} */