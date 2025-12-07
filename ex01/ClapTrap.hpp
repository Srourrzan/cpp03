#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap
{
public:
  ClapTrap( );
  ~ClapTrap( );
  ClapTrap( std::string const name );
  ClapTrap( ClapTrap const & src );
  ClapTrap & operator= ( ClapTrap const & rhs );
  void attack( const std::string & target );
  void takeDamage( unsigned int amount );
  void beRepaired( unsigned int amount );

protected:
  std::string _name;
  int _hitPoint;
  int _energyPoint;
  int _attackDamage;
};

#endif
