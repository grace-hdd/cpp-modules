/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:22:14 by grhaddad          #+#    #+#             */
/*   Updated: 2026/09/24 17:05:02 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(std::string name)
{
	this->firstName = name;
}

std::string Contact::getFirstName() const
{
	return this->firstName;
}

void Contact::setLastName(std::string name)
{
	this->lastName = name;
}

std::string Contact::getLastName() const
{
	return this->lastName;	
}

void Contact::setNickname(std::string name)
{
	this->nickname = name;
}

std::string Contact::getNickname() const
{
	return this->nickname;
}

void Contact::setPhoneNumber(std::string name)
{
	this->phoneNumber = name;
}

std::string Contact::getPhoneNumber() const
{
	return this->phoneNumber;
}

void Contact::setDarkestSecret(std::string name)
{
	this->darkestSecret = name;
}

std::string Contact::getDarkestSecret() const
{
	return this->darkestSecret;
}