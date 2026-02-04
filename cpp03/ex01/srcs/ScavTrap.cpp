#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_name = "default";
    this->_Energy_points = 50;
    this->_Hit_points = 100;
    this->_atack_damage = 20;
    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_Energy_points = 50;
    this->_Hit_points = 100;
    this->_atack_damage = 20;
    std::cout << "ScavTrap  constructor called for: " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) :ClapTrap(src)
{
    std::cout << "copy ScavTrap constructor called" << std::endl;
    std::cout << "made a copy of <" << src._name << ">" << std ::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &source)
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

void ScavTrap::attack(const std::string& target)
{
    if(this->_Energy_points > 0 && this->_Hit_points > 0)
    {
        std::cout <<"ScavTrap " << this->_name << " attacks " << target;
        std::cout << "and deals " << this->_atack_damage << " points of damage!" << std::endl;
        this->_Energy_points--;
    }
    else
        std::cout << "This ScavTrap is unable to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << "Activated guardGate" << std::endl;
}
