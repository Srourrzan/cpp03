#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::~ClapTrap() 
{
  std::cout << "ClapTrap is destroied." << std::endl;
}

ClapTrap::ClapTrap()
  :_name(""),
   _hitPoint(10),
   _energyPoint(10),
   _attackDamage(0)
{
  std::cout << "ClapTrap is constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
  :_name(name),
   _hitPoint(10),
   _energyPoint(10),
   _attackDamage(0)
{
  std::cout << this->_name << " is constructed." << std::endl;
}

ClapTrap & ClapTrap::operator= ( ClapTrap const & rhs )
{
  std::cout << "ClapTrap assignment operator called" << std::endl;

  if (this != &rhs)
	{
	  this->_name = rhs._name;
	  this->_hitPoint = rhs._hitPoint;
	  this->_energyPoint = rhs._energyPoint;
	  this->_attackDamage = rhs._attackDamage;
	}
  return (*this);
}

ClapTrap::ClapTrap( ClapTrap const & src ) :
  _name (src._name),
  _hitPoint(src._hitPoint),
  _energyPoint(src._energyPoint),
  _attackDamage(src._attackDamage)
{
  std::cout << "ClapTrap copy constructor called" << std::endl;

  return ;
}

void ClapTrap::attack(const std::string& target)
{
  if (this->_hitPoint <= 0 || this->_energyPoint <= 0)
	{
	  std::cout << this->_name << " cannot attack" << std::endl;
	  return ;
	}
  this->_energyPoint--;
  std::cout << "ClapTrap " << this->_name << " attacks "
						<< target << ", causing " << this->_attackDamage
						<< " points of damage !" << std::endl;
  if (this->_energyPoint <= 0)
  {
    std::cout << "ClapTrap has " 
							<< this->_energyPoint
							<< std::endl;
  }
}

void ClapTrap::takeDamage( unsigned int amount )
{
  if (_hitPoint <= 0)
	{
	  std::cout << this->_name
				<< " is dead"
				<< std::endl;
	  return ;
	}
  this->_hitPoint -= amount;
  std::cout << "ClapTrap " << this->_name
			<< " has taken damage amount = " << amount
			<< "remaininig HP = " << this->_hitPoint
			<< std::endl;
	if (this->_hitPoint <= 0)
		std::cout << "ClapTrap died" << std::endl;
  return ;
}

void ClapTrap::beRepaired( unsigned int amount )
{
  if (this->_hitPoint <= 0 || this->_energyPoint <= 0)
	{
	  std::cout << this->_name << " cannot repair" << std::endl;
	  return ;
	}
  this->_energyPoint--;
  this->_hitPoint += amount;
  std::cout << "ClapTrap " << this->_name
			<< " repaired by " << amount
			<< " point, now HP = " << this->_hitPoint
			<< std::endl;
  return ;
}
