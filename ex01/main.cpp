#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	a("Trashed");

	std::cout << a.getEnergyPoints() << std::endl;
	a.guardGate();

	return (0);
}
