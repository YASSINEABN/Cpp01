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
    void set_name(std::string str);

private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
