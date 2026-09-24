/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:02:13 by grhaddad          #+#    #+#             */
/*   Updated: 2026/09/24 17:17:51 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void		setFirstName(std::string name);
		std::string getFirstName() const;
		
		void		setLastName(std::string name);
		std::string getLastName() const;
		
		void		setNickname(std::string name);
		std::string getNickname() const;
		
		void		setPhoneNumber(std::string name);
		std::string getPhoneNumber() const;
		
		void		setDarkestSecret(std::string name);
		std::string getDarkestSecret() const;
};

#endif