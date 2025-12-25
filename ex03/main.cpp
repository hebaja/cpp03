#include "DiamondTrap.hpp"

int	main()
{
	{
		DiamondTrap	a("Jewel");
		a.whoAmI();
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
		DiamondTrap	a("Gem");
		DiamondTrap	b(a);
		DiamondTrap	c;

		c = b;
		c.whoAmI();
		c.attack("vampire");
		c.takeDamage(42);
		c.beRepaired(24);
		c.guardGate();
	}
	std::cout << "===========================" << std::endl;
	{
		DiamondTrap	a("Pearl");
		
		a.whoAmI();
		a.takeDamage(100);
		a.attack("werewolf");
		a.beRepaired(20);
		a.guardGate();
		a.highFivesGuys();
	}
	// std::cout << "===========================" << std::endl;
	// {
	// 	DiamondTrap	a("Marvel");

	// 	a.takeDamage(40);
	// 	for (int i = 0; i < 150; i++) {
	// 		a.attack("vulture");
	// 	}
	// 	a.beRepaired(12);
	// 	a.highFivesGuys();
	// }
	return (0);
}
