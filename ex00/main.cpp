#include <iostream>
#include "Zombie.hpp"



int main()
{
    Zombie z  = Zombie("zombieA");
    z.announce();

    
         Zombie *z1 = newZombie("Zombie test");
         z1->announce();
    

    randomChump("zombieC");
    delete z1;

}
