/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:36:17 by grhaddad          #+#    #+#             */
/*   Updated: 2026/09/24 19:20:47 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::addContact()
{
	std::string input;
	Contact newContact;

	while (true)
	{
		std::cout << "Enter first name: ";
		if (!std::getline(std::cin, input))
			return ;
		if (!input.empty())
		{
			newContact.setFirstName(input);
			break;
		}
		std::cout << "Field cannot be blank. try again!\n";
	}
	
	while (true)
	{
		std::cout << "Enter last name: ";
		if (!std::getline(std::cin, input))
			return ;
		if (!input.empty())
		{
			newContact.setLastName(input);
			break;
		}
		std::cout << "Field cannot be blank. try again!\n";
	}
	
	while (true)
	{
		std::cout << "Enter nickname: ";
		if (!std::getline(std::cin, input))
			return ;
		if (!input.empty())
		{
			newContact.setNickname(input);
			break;
		}
		std::cout << "Field cannot be blank. try again!\n";
	}
	
	while (true)
	{
		std::cout << "Enter phone number: ";
		if (!std::getline(std::cin, input))
			return ;
		if (!input.empty())
		{
			newContact.setPhoneNumber(input);
			break;
		}
		std::cout << "Field cannot be blank. try again!\n";
	}

	while (true)
	{
		std::cout << "Enter Darkest Secret: ";
		if (!std::getline(std::cin, input))
			return ;
		if (!input.empty())
		{
			newContact.setDarkestSecret(input);
			break;
		}
		std::cout << "Field cannot be blank. try again!\n";
	}
	
	contacts[currentIndex] = newContact;
	currentIndex = (currentIndex + 1) % 8;
	std::cout << "Contact successfully added!\n";
}
