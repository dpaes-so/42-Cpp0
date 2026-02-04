#include "../includes/ScavTrap.hpp"

#include "../includes/FragTrap.hpp"

int main()
{
    FragTrap a;
    FragTrap b("Freddy");
    FragTrap c(a);
    a.attack("an enemy");
    b.attack("a monster");

    std::cout << "----------------------" << std::endl;

    a.highFivesGuys();
    b.highFivesGuys();

    std::cout << "----------------------" << std::endl;

    for (int i = 0; i < 105; i++)
        a.attack("dummy target");

    a.highFivesGuys();
    return 0;
}
