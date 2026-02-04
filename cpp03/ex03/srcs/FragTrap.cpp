#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_Energy_points = 100;
    this->_Hit_points = 100;
    this->_atack_damage = 30;
    std::cout << "Default FragTrap constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_Energy_points = 100;
    this->_Hit_points = 100;
    this->_atack_damage = 30;
    std::cout << "FragTrap  constructor called for: " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) :ClapTrap(src)
{
    std::cout << "copy FragTrap constructor called" << std::endl;
    std::cout << "made a copy of <" << src._name << ">" << std ::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &source)
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

void FragTrap::attack(const std::string& target)
{
    if(this->_Energy_points > 0 && this->_Hit_points > 0)
    {
        std::cout <<"FragTrap " << this->_name << " attacks " << target;
        std::cout << " and deals " << this->_atack_damage << " points of damage!" << std::endl;
        this->_Energy_points--;
    }
    else
        std::cout << "This FragTrap is unable to attack!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " has no friends to high five..." << std::endl;
}
