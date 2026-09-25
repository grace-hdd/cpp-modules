/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:36:17 by grhaddad          #+#    #+#             */
/*   Updated: 2026/09/25 16:07:33 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
	currentIndex = 0;
}

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

	// to handle the 8-contanct limit without allocation, currentIndex updates using modulo
	// this ensures that after the 8th slot, it automatically wraps around back to index 0, replacing the oldest contact
	currentIndex = (currentIndex + 1) % 8;
	std::cout << "Contact successfully added!\n";
}

std::string truncate(std::string input)
{
	if (input.length() > 10)
		return input.substr(0, 9) + ".";
	return input;
}

void PhoneBook::searchContact() const
{
	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|";
	
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].getFirstName().empty())
		{
			std::cout << std::right << std::setw(10) << i << "|";
			std::cout << std::right << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
			std::cout << std::right << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
			std::cout << std::right << std::setw(10) << truncate(contacts[i].getNickname()) << "|";
			std::cout << std::endl;
		}
	}

	while (true)
	{
		std::string input;
		std::cout << "Enter the index of the contact: ";
		if (!std::getline(std::cin, input))
			return ;

		if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
		{
			int index = input[0] - '0';
			if (!contacts[index].getFirstName().empty())
			{
				std::cout << index << '\n';
				std::cout << contacts[index].getFirstName() << '\n';
				std::cout << contacts[index].getLastName() << '\n';
				std::cout << contacts[index].getNickname() << '\n';
				std::cout << contacts[index].getPhoneNumber() << '\n';
				std::cout << contacts[index].getDarkestSecret() << '\n';

				std::cout << "Look up another contact? (y/n): ";
				std::string choice;
				if (std::getline(std::cin, choice) && (choice == "y" || choice == "Y"))
					continue;
				else
					break;
			}
			else
			{
				std::cout << "No contacts found at this index! Try again.\n";
			}
		}
		else
		{
			std::cout << "Invalid index! Please enter a number between 0 and 7!\n";
		}
	}
}
