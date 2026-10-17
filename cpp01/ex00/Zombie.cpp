#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed" << std::endl;
}

// Destructor = a special member function that getss called automatically right before an object is destroyed
/* 1. It has the exact same name as the class, preceeded byt a tilde symbol (~)
   2. it taked no arguments and returns nothing
   3. Automatic Triggering:
   		- Stack objects: Called automatically when the object goes out of scope
		- Heap objects: Called automatically when you write delete zombie;
*/