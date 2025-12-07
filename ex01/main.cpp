#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
  ScavTrap scav("scav");

  scav.attack("clap");
  scav.takeDamage(5);
  scav.takeDamage(5);
  scav.beRepaired(3);
  scav.beRepaired(3);
  scav.beRepaired(3);
  scav.beRepaired(3);
  scav.guardGate();
  scav.guardGate();
  scav.takeDamage(5);
  scav.attack("clap");
  scav.takeDamage(5);
  scav.attack("clap");
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
  return (0);
}
