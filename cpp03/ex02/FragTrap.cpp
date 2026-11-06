#include "FragTrap.hpp"
#include <iostream>
FragTrap::FragTrap() : ClapTrap("default") { _hitPoints = 100; _energyPoints = 100; _attackDamage = 30; }
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) { _hitPoints = 100; _energyPoints = 100; _attackDamage = 30; }
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {}
FragTrap& FragTrap::operator=(const FragTrap& other) { if (this != &other) ClapTrap::operator=(other); return *this; }
FragTrap::~FragTrap() {}
void FragTrap::highFivesGuys() { std::cout << "FragTrap " << _name << " requests a high five" << std::endl; }