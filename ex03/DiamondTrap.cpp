#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Generic_clap_name")
{
	this->name = "Generic";
	std::cout << this->name << " " << getRobotType() << "created" << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string trapName) : ClapTrap(trapName + "_clap_name")
{
	std::cout << getRobotType() << "named " << trapName << " created" << std::endl;
	this->name = trapName;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << getRobotType() << this->name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other) // Check this before finishing
{
	std::cout << getRobotType() << other.name << " copied" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &other)
{
    std::cout << getRobotType() << other.name << " assigned to another robot" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
	}
	return (*this);
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello I am " << name << " but my ClapTrap name is " << ClapTrap::name << std::endl;
}

std::string		DiamondTrap::getRobotType() const
{
	return "DiamondTrap ";
}
