#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Generic") 
{
	std::cout << getRobotType() << name << " created" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << getRobotType() << "named " << name << " created" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << getRobotType() << this->name << " destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{
	std::cout << getRobotType() << other.name << " copied" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

FragTrap& FragTrap::operator=(FragTrap &other)
{
	std::cout << getRobotType() << other.name << " assigned to another robot" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << getRobotType() << this->name << " is requesting high-fives now" << std::endl;
}

std::string		FragTrap::getRobotType() const
{
	return "FragTrap ";
}
