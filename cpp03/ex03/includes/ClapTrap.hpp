#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _Hit_points;
        int _Energy_points;
        int _atack_damage;
    public:
        ClapTrap();
		ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        ClapTrap &operator=(ClapTrap const &source);
        ~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        std::string getName();
};
#endif