#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Generic")
{
	std::cout << getRobotType() << this->name << "created" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << getRobotType() << "named " << name << " created" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << getRobotType() << this->name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
	std::cout << getRobotType() << other.name << " copied" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ScavTrap& ScavTrap::operator = (ScavTrap &other)
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

void ScavTrap::guardGate()
{
	std::cout << getRobotType() << this->name << " is now in Gate Keeper Mode" << std::endl;
}

std::string		ScavTrap::getRobotType() const
{
	return "ScavTrap ";
}
