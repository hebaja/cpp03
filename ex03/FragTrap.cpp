#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Generic") 
{
	std::cout << getRobotType() << name << " created" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(std::string trapName) : ClapTrap(trapName)
{
	std::cout << getRobotType() << "named " << trapName << " created" << std::endl;
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
	if (this->hitPoints == 0)
		std::cout << getRobotType() << this->name << " can't request high-fives because it's dead" << std::endl;
	else
		std::cout << getRobotType() << this->name << " is requesting high-fives now" << std::endl;
}

std::string		FragTrap::getRobotType() const
{
	return "FragTrap ";
}
