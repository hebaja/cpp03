#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		std::string		getRobotType() const;

	 public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap &other);
		FragTrap& operator=(FragTrap &other);
		void highFivesGuys(void);	
};
