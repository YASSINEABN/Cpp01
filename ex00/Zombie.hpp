#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie {
public:
    Zombie();
    Zombie(std::string str);
    ~Zombie();
    void announce();

private:
    std::string name;
};

Zombie newZombie(std::string name);

#endif
