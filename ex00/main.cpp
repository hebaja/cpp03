#include "ClapTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap	a("Kamikaze");
	ClapTrap	b(a);
	ClapTrap	c;
	ClapTrap	e("Wimp");

	a.attack("Punk");
	a.takeDamage(3);
	a.beRepaired(1);
	std::cout << "Energy left -> " << a.getEnergyPoints() << std::endl;

	std::cout << "=================" << std::endl;

	b.attack("Hobbo");
	b.takeDamage(5);
	b.beRepaired(2);
	std::cout << "Energy left -> " << b.getEnergyPoints() << std::endl;
	
	std::cout << "=================" << std::endl;

	c = b;
	c.attack("Ghoul");
	c.takeDamage(1);
	c.beRepaired(2);
	std::cout << "Energy left -> " << c.getEnergyPoints() << std::endl;
	
	std::cout << "=================" << std::endl;

	ClapTrap d(a);
	d.attack("Wild dog");
	d.takeDamage(7);
	d.beRepaired(0);
	std::cout << "Energy left -> " << d.getEnergyPoints() << std::endl;

	std::cout << "=================" << std::endl;

	e.takeDamage(13);

	return (0);
}
