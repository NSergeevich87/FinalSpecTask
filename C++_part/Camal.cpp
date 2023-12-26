#include "Camal.h"

Camal::Camal(std::string name_val, std::string birthday_val) : Pack_Animals(name_val, birthday_val)
{
    commands.push_back("Beber");
}

void Camal::print (std::ostream &os) const
{
    
    os << "Camal: " << name << " " << birthday;
}

void Camal::add_command(std::string value)
{
    std::string new_command{};
    for(size_t i = 0; i < value.length(); i++)
    {
        new_command += tolower(value[i]);
    }
    std::cout << new_command << std::endl;
    
    for(auto c : commands)
    {
        std::string temp{};
        for(size_t i = 0; i < c.length(); i++)
        {
            temp += tolower(c[i]);
        }
        
        if(new_command == temp)
        {
            std::cout << "This command already exist" << std::endl;
            return;
        }
    }
    
    commands.push_back(value);
}

void Camal::show_commands() const
{
    for(auto c : commands)
    {
        std::cout << " " << c << " ";
    }
    std::cout << std::endl;
}

void Camal::play_command(int num) const
{    
    std::cout << name << " doing command: " << commands[num] << std::endl;
}