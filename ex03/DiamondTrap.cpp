#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Generic_clap_name")
{
	std::cout << "Generic DiamondTrap created" << std::endl;
	// std::cout << "Generic " << getRobotType() << "created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DimondTrap named " << name << " created" << std::endl;
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << getRobotType() << this->name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << getRobotType() << other.name << " copied" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &other)
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

// std::string             DiamondTrap::getRobotType() const
// {
// 	return "DiamondTrap ";
// }

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello I am " << name << " but my ClapTrap name is " << ClapTrap::name << std::endl;
}
