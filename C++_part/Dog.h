#ifndef _DOG_H_
#define _DOG_H_

#include "Pat_Animals.h"
#include <iostream>
#include <vector>

class Dog : public Pat_Animals
{
private:
    static constexpr const char *def_name {"no_name"};
    static constexpr const char *def_birthday {"no_date"};
    
protected:
    std::vector<std::string> commands{};
    
public:
    Dog(std::string name_val = def_name, std::string birthday_val = def_birthday);
    
    virtual void print(std::ostream &os) const override;
    
    virtual ~Dog() = default;
    
    
    void add_command(std::string value);
    void show_commands() const;
    void play_command(int num) const;
};

#endif // _DOG_H_
