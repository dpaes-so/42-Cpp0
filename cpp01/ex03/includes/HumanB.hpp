#ifndef WEAPON_HPP

#include "Weapon.hpp"
#include "iostream"
#include <iomanip>
#include <string>
#include <cstdlib>

class HumanA
{
    private:
        Weapon weapon;
        std::string name;
    public:
        void atack();
        HumanA( void );
        ~HumanA( void );
};

#endif