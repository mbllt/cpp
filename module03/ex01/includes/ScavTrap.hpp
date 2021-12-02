#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {

	public:
		
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& cpy);
		~ScavTrap(void);

		ScavTrap&		operator=(ScavTrap const & src);

		void			attack(std::string const & target);
		void			guardGate();

	private:


};

#endif