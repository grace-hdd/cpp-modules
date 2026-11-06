#include "ClapTrap.hpp"
#include <iostream>
ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {}
ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {}
ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other) { _name = other._name; _hitPoints = other._hitPoints; _energyPoints = other._energyPoints; _attackDamage = other._attackDamage; }
	return *this;
}
ClapTrap::~ClapTrap() {}
void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0) return;
	--_energyPoints;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) { if (amount >= _hitPoints) _hitPoints = 0; else _hitPoints -= amount; }
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0) return;
	--_energyPoints;
	_hitPoints += amount;
}