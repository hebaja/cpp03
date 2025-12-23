#include "ScavTrap.hpp"

int	main()
{
	{
		ScavTrap	a("Trashed");
		a.attack("Punk");
		a.takeDamage(30);
		a.beRepaired(20);
		a.guardGate();
	}
	std::cout << "===========================" << std::endl;
	{
		ClapTrap	a("Junk");
		a.attack("Ghoul");
		a.takeDamage(3);
		a.beRepaired(1);
	}
	return (0);
}
