#include <iostream>
#include "Zombie.hpp"


int main()
{
   Zombie *horde = zombieHorde(4, "Zombie");

int i = -1;
   while (++i < 4)
   {
         horde[i].announce();
   }
   delete [] horde;
}
