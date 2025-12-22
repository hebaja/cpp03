#include "ScavTrap.hpp"

int	main()
{
	{
		ScavTrap	a("Trashed");

		std::cout << a.getEnergyPoints() << std::endl;
		a.attack("Punk");
		a.takeDamage(30);
		a.beRepaired(20);
		std::cout << "Energy left -> " << a.getEnergyPoints() << std::endl;
		a.guardGate();
	}
	std::cout << "===========================" << std::endl;
	{
		ClapTrap	a("Junk");
		std::cout << a.getEnergyPoints() << std::endl;
		a.attack("Ghoul");
		a.takeDamage(3);
		a.beRepaired(1);
		std::cout << "Energy left -> " << a.getEnergyPoints() << std::endl;
	}

	return (0);
}
