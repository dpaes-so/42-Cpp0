#ifndef HUMANB_HPP
    #define HUMANB_HPP
#include "Weapon.hpp"
#include "iostream"
#include <iomanip>
#include <string>
#include <cstdlib>

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        void attack();
        void setWeapon(Weapon &weap);
        HumanB( std::string name);
        ~HumanB( void );
};

#endif