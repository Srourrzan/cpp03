#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
  ScavTrap scav("scav");

  scav.attack("enemy");
  scav.takeDamage(5);
  scav.takeDamage(5);
  scav.beRepaired(3);
  scav.beRepaired(3);
  scav.beRepaired(3);
  scav.beRepaired(3);
  scav.guardGate();
  scav.guardGate();
  scav.takeDamage(5);
  scav.attack("enemy");
  scav.takeDamage(5);
  scav.attack("enemy");
  scav.beRepaired(3);
  scav.takeDamage(10);
  scav.takeDamage(5);
  scav.takeDamage(10);
  scav.takeDamage(5);
  scav.takeDamage(10);
  scav.takeDamage(5);
  scav.takeDamage(10);
  scav.takeDamage(5);
  scav.takeDamage(10);
  scav.takeDamage(10);
  scav.takeDamage(10);
  scav.takeDamage(10);
  scav.guardGate();
  scav.attack("enemy");
  scav.beRepaired(3);

  return (0);
}
