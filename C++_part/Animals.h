#ifndef _ANIMALS_H_
#define _ANIMALS_H_

#include "I_Print.h"
#include <string>
#include <iostream>

class Animals : public I_Print
{
private:
    static constexpr const char *def_name {"no_name"};
    static constexpr const char *def_birthday {"no_date"};
    
protected:
    std::string name{};
    std::string birthday{};
    
public:
    Animals(std::string name_val = def_name, std::string birthday_val = def_birthday);
    
    virtual void print(std::ostream &os) const override;
    
    virtual ~Animals() = default;
};

#endif // _ANIMALS_H_
