#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	ScavTrap scav("SC4V-TP");
	FragTrap frag("FR4G-TP");
	scav.attack("FragTrap");
	scav.guardGate();
	frag.attack("ScavTrap");
	frag.highFivesGuys();
	return 0;
}