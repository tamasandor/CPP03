#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap me("Andor");
	ClapTrap non(me);
	ClapTrap anotherobject("Another");
	ScavTrap robot;


	me.takeDamage(10);
	me.takeDamage(10);
	me.beRepaired(10);
	me.takeDamage(5);
	me.attack("Another");
	non.takeDamage(5);
	robot.guardGate();
	return 0;
}