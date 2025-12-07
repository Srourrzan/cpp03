#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
  : ClapTrap()
{
  this->_hitPoint = 100;
  this->_energyPoint = 100;
  this->_attackDamage = 30;

  std::cout << "FragTrap is constructed"
			<< std::endl;
  return ;
}

FragTrap::FragTrap(std::string name)
  : ClapTrap(name)
{
  this->_hitPoint = 100;
  this->_energyPoint = 100;
  this->_attackDamage = 30;

  std::cout << "FragTrap "
			<< this->_name
			<< " is constructed"
			<< std::endl;
  return ;  
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap "
			<< this->_name
			<< " is destructed"
			<< std::endl;
}

FragTrap & FragTrap::operator= ( FragTrap const & rhs )
{
  std::cout << "FragTrap assignmnet operator called"
			<< std::endl;
  if (this != &rhs)
	  ClapTrap::operator=(rhs);
  return (*this);
}

FragTrap::FragTrap( FragTrap const & src )
  : ClapTrap(src)
{
  std::cout << "FragTrap copy constructor called"
			<< std::endl;
  this->_hitPoint = src._hitPoint;
  this->_energyPoint = src._energyPoint;
  this->_attackDamage = src._attackDamage;
  return ;
}

void FragTrap::highFivesGuys( void )
{
  if (this->_hitPoint <= 0 || this->_energyPoint <= 0)
  {
    std::cout << "FragTrap "
              << this->_name
              << " cannot give high five"
              << std::endl;
  }
  this->_energyPoint--;
  std::cout << this->_name
			<< " give me high five everyone "
			<< std::endl;
  return ;
}
