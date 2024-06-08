/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:38:05 by mlouazir          #+#    #+#             */
/*   Updated: 2024/04/19 16:27:16 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = -1;
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (97 <= av[i][j] && av[i][j] <= 122)
				av[i][j] -= 32;
			std::cout << av[i][j];
		}
	}
	std::cout << std::endl;
	return (0);
}
