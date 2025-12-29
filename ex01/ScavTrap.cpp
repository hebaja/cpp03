#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Generic")
{
	std::cout << getRobotType() << this->name << " created" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string trapName) : ClapTrap(trapName)
{
	std::cout << getRobotType() << "named " << trapName << " created" << std::endl;
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
	if (this != &other)
	{
		std::cout << getRobotType() << other.name << " assigned to another robot" << std::endl;
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->hitPoints == 0)
		std::cout << getRobotType() << this->name << " is dead and can't be in Gate Keeper Mode" << std::endl;
	else
		std::cout << getRobotType() << this->name << " is now in Gate Keeper Mode" << std::endl;
}

std::string		ScavTrap::getRobotType() const
{
	return "ScavTrap ";
}
