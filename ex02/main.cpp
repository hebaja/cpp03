#include "FragTrap.hpp"

int	main()
{
	{
		FragTrap	a("Clutter");
		a.attack("hobo");
		a.takeDamage(30);
		a.beRepaired(20);
		a.highFivesGuys();
	}
	std::cout << "===========================" << std::endl;
	{
		ClapTrap	a("Dumpster");
		a.attack("roach");
		a.takeDamage(3);
		a.beRepaired(1);
	}
	std::cout << "===========================" << std::endl;
	{
		FragTrap	a("Waste");
		FragTrap	b(a);
		FragTrap	c;

		c = b;
		c.attack("rat");
		c.takeDamage(35);
		c.beRepaired(7);
		c.highFivesGuys();
	}
	std::cout << "===========================" << std::endl;
	{
		FragTrap	a("Filth");

		a.takeDamage(100);
		a.attack("cyborg");
		a.beRepaired(20);
		a.highFivesGuys();
	}
	/*
	std::cout << "===========================" << std::endl;
	{
		FragTrap	a("Scrap");

		a.takeDamage(40);
		for (int i = 0; i < 100; i++) {
			a.attack("vulture");
		}
		a.beRepaired(12);
		a.highFivesGuys();
	}
	*/
	return (0);
}
