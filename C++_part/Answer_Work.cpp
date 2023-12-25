#include "Answer_Work.h"
#include "Base_Animals.h"
#include "Caballo.h"
#include <iostream>
#include <string>

using namespace std;

void create_animal(std::string n, std::string d);

void work_with_answer(int num)
{
    std::string name{};
    std::string date{};
    
    switch (num)
    {
        case 1:
            cout << "\nThis is all the animals of the reserve" << endl;
            for(auto item : caballos) std::cout << item << std::endl;
            break;
        case 2:
            cout << "\nAdding a new Animal" << endl;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter date: ";
            cin >> date;
            create_animal(name, date);
            
            break;
        case 3:
            cout << "This are all commands of an Animal" << endl;
            caballos[0].show_commands();
            break;
        case 4:
            cout << "Adding a new command for an Animal" << endl;
            break;
    }
}

void create_animal(std::string n, std::string d)
{
    caballos.push_back({n, d});
}