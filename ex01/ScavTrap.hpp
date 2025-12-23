#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		std::string		getRobotType() const;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap &other);
		ScavTrap& operator = (ScavTrap &other);
		// void attack(std::string target);
		void guardGate();
};
