#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	
	protected:
		std::string		getRobotType() const;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap &other);
		DiamondTrap& operator=(DiamondTrap &other);
		void attack(std::string target);
		void whoAmI();
};
