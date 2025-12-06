#include "FragTrap.hpp"
#include <iostream>

int main()
{
  FragTrap frag("frag");

  frag.attack("clap");
  frag.takeDamage(5);
  frag.beRepaired(3);
  frag.highFivesGuys();
  return (0);
}
