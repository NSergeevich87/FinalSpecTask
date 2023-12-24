#ifndef _PACK_ANIMALS_H_
#define _PACK_ANIMALS_H_

#include "Animals.h"
#include <iostream>

class Pack_Animals : public Animals
{
private:
    static constexpr const char *def_name {"no_name"};
    static constexpr const char *def_birthday {"no_date"};
    
public:
    Pack_Animals(std::string name_val, std::string birthday_val);
    
    virtual void print(std::ostream &os) const override;
    
    virtual ~Pack_Animals() = default;

};

#endif // _PACK_ANIMALS_H_
