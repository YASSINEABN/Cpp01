#include "Harl.hpp"



void Harl::debug()
{
    std::cout << "Debugging" << std::endl;
}


void Harl::info()
{
    std::cout << "Information" << std::endl;
}

void Harl::warning()
{
    std::cout << "Warning" << std::endl;
}


void Harl::complain(std::string level)
{
{
    void (Harl::*arr[])() = {&Harl::debug, &Harl::info, &Harl::warning};
    
    std::string levels[4] = {"debug", "info", "warning"};
    int i = -1;
    while (++i < 4)
    {
        if(!levels[i].compare(level))
        {            
            (this->*arr[i])();
            return ;
        }
    }
    
}   
}