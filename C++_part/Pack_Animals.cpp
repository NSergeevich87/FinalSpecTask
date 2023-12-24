#include "Pack_Animals.h"

Pack_Animals::Pack_Animals(std::string name_val, std::string birthday_val) : Animals(name_val, birthday_val)
{
}

void Pack_Animals::print(std::ostream &os) const
{
    os << "Pack_Animal: " << Animals::name << " " << Animals::birthday;
}