#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Generic"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap named " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << getRobotType() << this->name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << getRobotType() << other.name << " copied" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap &other)
{
	std::cout << getRobotType() << other.name << " assigned to another ClapTrap" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints == 0)
	{
		std::cout << getRobotType() << this->name << " does not have enough energy to attack!" << std::endl;
		return ;
	}
	else if (this->hitPoints == 0)
	{
		std::cout << getRobotType() << this->name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << getRobotType() << this->name << " attacks " << target << ", causing "
		<< this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= amount)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << getRobotType() << this->name << " took " << amount << " damage!" 
		<< " Now it has " << this->hitPoints << " hit points left!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints == 0)
	{
		std::cout << getRobotType() << this->name << " does not have enough energy to be repaired!" << std::endl;
		return ;
	}
	else if (this->hitPoints == 0)
	{
		std::cout << getRobotType() << this->name << " is dead and can not be repaired!" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << getRobotType() << this->name << " repaired itself " << amount << " hit points!"
		<< " Now it has " << this->hitPoints << " hit points!"<< std::endl; 
}

std::string		ClapTrap::getRobotType() const
{
	return "ClapTrap ";
}
