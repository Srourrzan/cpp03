#include "ClapTrap.hpp"
#include <iostream>

int main()
{
  ClapTrap clap("test");

  clap.attack("enemy");
  clap.takeDamage(3);
  clap.beRepaired(2);
  return (0);
}
