#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

/* const std::string& getType() const
	- first const: applies a returned referent
				   it returns a direct reference to the internal type variable for performance, but marks it const so the caller cannot modify it
	- second const: apllies to the function itself
				    it promises C++ that calling getType() will not change any attributes inside the weapon instance
					without it we cannot call getType() on a const Weapon object
*/

class Weapon
{
	private:
		std::string type;
	public: 
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string type);
};

#endif