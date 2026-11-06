#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("CL4P-TP");
	clap.attack("a target");
	clap.takeDamage(4);
	clap.beRepaired(2);
	return 0;
}