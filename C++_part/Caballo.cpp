#include "Caballo.h"
#include <iomanip>

Caballo::Caballo(std::string name_val, std::string birthday_val) : Pack_Animals(name_val, birthday_val)
{
    commands.push_back("Run");
    commands.push_back("Jump");
}

void Caballo::print (std::ostream &os) const
{
    const int l_f{12};
    const int r_f{50};
    
    os << std::setw(l_f) << std::left << "Caballo ->" 
       << std::setw(r_f) << std::right << name + " " + birthday;
}

void Caballo::add_command(std::string value)
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

void Caballo::show_commands() const
{
    for(auto c : commands)
    {
        std::cout << " " << c << " ";
    }
    std::cout << std::endl;
}

void Caballo::play_command(int num) const
{    
    std::cout << name << " doing command: " << commands[num] << std::endl;
}