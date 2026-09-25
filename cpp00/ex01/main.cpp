/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:04:51 by grhaddad          #+#    #+#             */
/*   Updated: 2026/09/25 16:08:31 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	PhoneBook myPhoneBook;
	std::string command;

	std::cout << "Welcome to the PhoneBook!\n";
	while (true)
	{
		std::cout << "Please Enter a command (ADD, SEARCH, EXIT): \n";
		
		if (!std::getline(std::cin, command))
			break;
		
		if (command == "ADD")
		{
			myPhoneBook.addContact();
		}
		else if (command == "SEARCH")
		{
			myPhoneBook.searchContact();
		}
		else if (command == "EXIT")
		{
			std::cout << "We are exiting the phonebook. All contacts will be lost forever!\n";
			break;
		}
		else {
			std::cout << "Not a valid input!\n";
		}
	}
	return 0;
}