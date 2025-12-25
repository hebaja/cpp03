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
	std::cout << "===========================" << std::endl;
	{
		ScavTrap	a("Garbage");
		ScavTrap	b(a);
		ScavTrap	c;

		c = b;
		c.attack("mutant");
		c.takeDamage(50);
		c.beRepaired(11);
		c.guardGate();
	}
	std::cout << "===========================" << std::endl;
	{
		ScavTrap	a("Rubbish");

		a.takeDamage(100);
		a.attack("punk");
		a.beRepaired(1);
		a.guardGate();
	}
	/*
	std::cout << "===========================" << std::endl;
	{
		ScavTrap	a("Litter");

		a.takeDamage(40);
		for (int i = 0; i < 51; i++) {
			a.attack("bug");
		}
		a.beRepaired(12);
		a.guardGate();
	}
	*/
	return (0);
}
