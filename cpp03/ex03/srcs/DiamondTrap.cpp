#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name")
{
    this->_name = "default";
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Hit_points = FragTrap::_Hit_points;
    this->_atack_damage = FragTrap::_atack_damage;
    std::cout << "Default DiamondTrap constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Hit_points = FragTrap::_Hit_points;
    this->_atack_damage = FragTrap::_atack_damage;
    std::cout << "DiamondTrap  constructor called for: " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :ClapTrap(src) , ScavTrap(src) , FragTrap(src)
{
    std::cout << "copy DiamondTrap constructor called" << std::endl;
    std::cout << "made a copy of <" << src._name << ">" << std ::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Default DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &source)
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

void DiamondTrap::attack(const std::string& target)
{
    if(this->_Energy_points > 0 && this->_Hit_points > 0)
    {
        std::cout <<"DiamondTrap " << this->_name << " attacks " << target;
        std::cout << " and deals " << this->_atack_damage << " points of damage!" << std::endl;
        this->_Energy_points--;
    }
    else
        std::cout << "This DiamondTrap is unable to attack!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My private name is " << this->_name <<  std::endl;
    std::cout << "My clap name is " <<    this->getName() <<  std::endl;
}
