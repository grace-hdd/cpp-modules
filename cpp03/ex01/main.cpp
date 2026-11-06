#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("SC4V-TP");
	scav.attack("a target");
	scav.takeDamage(25);
	scav.beRepaired(10);
	scav.guardGate();
	return 0;
}