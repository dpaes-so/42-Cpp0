#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _Hit_points(10), _Energy_points(10), _atack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _Hit_points(10), _Energy_points(10), _atack_damage(0)
{
    std::cout << "constructor called for: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src._name << ">" << std ::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->_name = source._name;
        this->_Hit_points = source._Hit_points;
        this->_atack_damage = source._atack_damage;
        this->_Energy_points = source._Energy_points;
    }
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_Energy_points > 0 && this->_Hit_points > 0)
    {
        std::cout << this->_name << " attacks " << target;
        std::cout << "and deals " << this->_atack_damage << " points of damage!" << std::endl;
        this->_Energy_points--;
    }
    else
        std::cout << "This ClapTrap is unable to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Hit_points > 0)
    {
        std::cout << this->_name << " took " << amount << " points of damage!" << std::endl;

        if (amount >= this->_Hit_points)
            this->_Hit_points = 0;
        else
            this->_Hit_points = this->_Hit_points - amount;
    }
    else
        std::cout << "womp womp " << this->_name << " has 0 hit points!" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_Energy_points > 0 && this->_Hit_points > 0)
    {
        std::cout << this->_name << " repaired itself for " << amount << " hit points!" << std::endl; 
        if(amount > 0)
            this->_Hit_points += amount;
        this->_Energy_points--;
    }
    else
        std::cout << "This ClapTrap cant repair itself!" << std::endl;
}
