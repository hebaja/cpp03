#include "FragTrap.hpp"

int	main()
{
	{
		FragTrap	a("Clutter");

		std::cout << a.getEnergyPoints() << std::endl;
		a.attack("Hobo");
		a.takeDamage(30);
		a.beRepaired(20);
		std::cout << "Energy left -> " << a.getEnergyPoints() << std::endl;
		a.highFivesGuys();
	}
	std::cout << "===========================" << std::endl;
	{
		ClapTrap	a("Stuff");
		std::cout << a.getEnergyPoints() << std::endl;
		a.attack("Mutant");
		a.takeDamage(3);
		a.beRepaired(1);
		std::cout << "Energy left -> " << a.getEnergyPoints() << std::endl;
	}

	return (0);
}
