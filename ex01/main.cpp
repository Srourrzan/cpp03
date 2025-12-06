#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
  ScavTrap scav("scav");

  scav.attack("clap");
  scav.takeDamage(5);
  scav.beRepaired(3);
  scav.guardGate();
  return (0);
}
