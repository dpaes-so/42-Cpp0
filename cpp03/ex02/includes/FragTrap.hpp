#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &source);
        ~FragTrap(void);					

        FragTrap &operator=(FragTrap const &source);
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif