#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
  : ClapTrap()
{
  this->_hitPoint = 100;
  this->_energyPoint = 50;
  this->_attackDamage = 20;

  std::cout << "ScavTrap is constructed"
			<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name)
{
  this->_hitPoint = 100;
  this->_energyPoint = 50;
  this->_attackDamage = 20;
  
  std::cout << "ScavTrap "
			<< this->_name
			<< " is constructed"
			<< std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap "
			<< this->_name
			<< " is destructed"
			<< std::endl;
}

ScavTrap & ScavTrap::operator= ( ScavTrap const & rhs )
{
  std::cout << "ScavTrap assignment operator called" << std::endl;

  if (this != &rhs)
	{
	  ClapTrap::operator=(rhs);
	}
  return (*this);
}

ScavTrap::ScavTrap( ScavTrap const & src)
  : ClapTrap(src)
{
  std::cout << "ScavTrap copy constructor called"
			<< std::endl;
  this->_hitPoint = src._hitPoint;
  this->_energyPoint = src._energyPoint;
  this->_attackDamage = src._attackDamage;
  return ;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap "
			<< this->_name
			<< " is in Gate keeper mode."
			<< std::endl;
  return ;
}
