#include "../includes/DiamondTrap.hpp"

int main(void)
{
	FragTrap	frag("Bob");
	ScavTrap	scav("Diogo");
	DiamondTrap	diam("Robson");
	DiamondTrap copy = diam;

	std::cout << "----------------------------------------------" << std::endl;
	diam.attack("Bob");
	scav.attack("Bob");
	frag.attack("Diogo");
	std::cout << " ----------------------------------------------" << std::endl;
	diam.guardGate();
	scav.guardGate();
	std::cout << "1----------------------------------------------" << std::endl;
	diam.whoAmI();
	diam.highFivesGuys();
	std::cout << "1----------------------------------------------" << std::endl;
	copy.whoAmI();
	copy.attack("Rafael");
	std::cout << "----------------------------------------------" << std::endl;
	return 0;
}