/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:05:45 by grhaddad          #+#    #+#             */
/*   Updated: 2026/09/25 16:42:27 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contact contacts[8];
		int currentIndex;
	public:
		PhoneBook();
		void addContact();
		void searchContact() const;
};

#endif