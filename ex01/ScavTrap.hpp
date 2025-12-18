#include "ClapTrap.hpp"

#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap &other);
		ScavTrap& operator = (ScavTrap &other);
		void guardGate();
		
};
