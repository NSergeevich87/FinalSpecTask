#include "Pat_Animals.h"

Pat_Animals::Pat_Animals(std::string name_val, std::string birthday_val) : Animals(name_val, birthday_val)
{
}

void Pat_Animals::print(std::ostream &os) const
{
    os << "Pat_Animal: " << Animals::name << " " << Animals::birthday;
}