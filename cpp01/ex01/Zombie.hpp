#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{
	private:
		std::string name;
	public:
		Zombie(void);
		void announce(void);
		void setName(std::string name);
		std::string getName(void);
		~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif