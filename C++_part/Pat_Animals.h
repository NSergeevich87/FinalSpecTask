#ifndef _PAT_ANIMALS_H_
#define _PAT_ANIMALS_H_

#include "Animals.h"
#include <iostream>

class Pat_Animals : public Animals
{
private:
    static constexpr const char *def_name {"no_name"};
    static constexpr const char *def_birthday {"no_date"};
    
public:
    Pat_Animals(std::string name_val, std::string birthday_val);
    
    virtual void print(std::ostream &os) const override;
    
    virtual ~Pat_Animals() = default;

};

#endif // _PAT_ANIMALS_H_
