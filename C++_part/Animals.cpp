#include "Animals.h"

Animals::Animals(std::string name_val, std::string birthday_val) : name{name_val}, birthday{birthday_val}
{
}

void Animals::print(std::ostream &os) const
{
    os << "Animal: " << name << " " << birthday;
}