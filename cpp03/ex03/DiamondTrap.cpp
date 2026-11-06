#include "DiamondTrap.hpp"
#include <iostream>
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default"), _diamondName("default") {}
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _diamondName(name) {}
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), _diamondName(other._diamondName) {}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other) { ClapTrap::operator=(other); _diamondName = other._diamondName; }
	return *this;
}
DiamondTrap::~DiamondTrap() {}
void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _diamondName
		<< ", ClapTrap name: " << _name << std::endl;
}
void DiamondTrap::attack(const std::string& target) { ScavTrap::attack(target); }