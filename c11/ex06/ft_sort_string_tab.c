/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:27:40 by tnard             #+#    #+#             */
/*   Updated: 2021/07/20 10:27:40 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s1[n] == s2[n])
		n++;
	return (s1[n] - s2[n]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;
	int		size;

	size = 0;
	i = 1;
	while (tab[size])
		size++;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return ;
}