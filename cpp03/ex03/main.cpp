#include "DiamondTrap.hpp"
int main()
{
	DiamondTrap diamond("DI4M-TP");
	diamond.attack("a target");
	diamond.takeDamage(20);
	diamond.beRepaired(10);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	return 0;
}