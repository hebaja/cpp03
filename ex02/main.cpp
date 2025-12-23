#include "FragTrap.hpp"

int	main()
{
	{
		FragTrap	a("Clutter");
		a.attack("Hobo");
		a.takeDamage(30);
		a.beRepaired(20);
		a.highFivesGuys();
	}
	std::cout << "===========================" << std::endl;
	{
		ClapTrap	a("Stuff");
		a.attack("Mutant");
		a.takeDamage(3);
		a.beRepaired(1);
	}
	return (0);
}
