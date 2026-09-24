/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:01:26 by grhaddad          #+#    #+#             */
/*   Updated: 2026/09/22 16:51:29 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for (int i = 1; i < ac; ++i) {
			for (int j = 0; av[i][j] != '\0'; ++j) {
				std::cout << static_cast<char>(std::toupper(av[i][j]));
			}
		}
		std::cout << std::endl;
	}
	return 0;
}