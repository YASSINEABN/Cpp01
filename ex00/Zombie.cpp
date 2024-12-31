#include "Zombie.hpp"

Zombie::Zombie(std::string str){
    this->name = str;
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->name  << "this object is destruod" << std::endl ;
}
void Zombie::announce()
{
    std::cout << this->name <<": " << " BraiiiiiiinnnzzzZ.." << std::endl ;
}