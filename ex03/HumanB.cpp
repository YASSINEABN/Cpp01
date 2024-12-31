#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->get_type() << std::endl;
}