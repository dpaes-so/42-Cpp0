#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &source);
        ~DiamondTrap(void);					

        DiamondTrap &operator=(DiamondTrap const &source);
        void attack(const std::string& target);
        void whoAmI(void);
};

#endif