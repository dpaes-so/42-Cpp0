#include "../includes/ClapTrap.hpp"

int main(void)
{
	
	ClapTrap a;
	ClapTrap b("bert");
	ClapTrap c("clyde");
	
	b.attack("clyde");
	c.takeDamage(0);
	c.beRepaired(0);
	a.attack("bert");
	b.takeDamage(0);
	a.attack("bert");
	b.takeDamage(0);
	a.attack("bert");
	b.takeDamage(0);
	a.attack("bert");
	b.takeDamage(0);
	
	return (0);
}