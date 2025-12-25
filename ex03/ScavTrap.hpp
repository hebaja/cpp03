#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		std::string		getRobotType() const;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap &other);
		ScavTrap& operator = (ScavTrap &other);
		void guardGate();
};
