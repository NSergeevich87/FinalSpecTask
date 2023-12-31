#include "Caballo.h"
#include "Camal.h"
#include "Donkey.h"
#include "Dog.h"
#include "Cat.h"
#include "Hamster.h"
#include "Print_Menu.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

vector<Caballo> caballos{};
vector<Camal> camals{};
vector<Donkey> donkeys{};
vector<Dog> dogs{};
vector<Cat> cats{};
vector<Hamster> hamsters{};
void add_some_reserve();
void work_with_answer(int num);

void show_animals();
void create_animal();
void show_all_commands();
void add_new_command();

int main()
{  
    add_some_reserve();
    
    const int field{63};
    bool exit = false;
    int answer{};
    
    cout << "\n" << setw((field - 22) / 2) << "" << "Welcome to my program!\n" << endl;
    do
    {
        
        answer = print();
        if(answer == 0) exit = true;
        else work_with_answer(answer);
            
    } while (!exit);
    
    cout << "\nGoodbye...." << endl;
    
	cout << endl;
	return 0;
}

void work_with_answer(int num)
{
    string animal_name{};
    string animal_birthdate{};
    
    switch (num)
    {
        case 1:
            cout << "\nThese are all animals:" << endl;
            show_animals();
            break;
        case 2:
            cout << "\nAdding a new Animal" << endl;
            create_animal();
            break;
        case 3:
            cout << "\nThese are ALL commands that animals have learned:" << endl;
            show_all_commands();
            break;
        case 4:
            cout << "\nAdding a new command" << endl;
            add_new_command();
            break;
    }
}

void add_some_reserve()
{
    caballos.push_back({"Mustang", "10-10-2020"});
    camals.push_back({"Six_humped", "12-05-2018"});
    donkeys.push_back({"Donat", "05-05-2015"});
    dogs.push_back({"Viejo_amigo", "04-01-2008"});
    cats.push_back({"Obeso", "09-05-2017"});
    hamsters.push_back({"Vago", "08-02-2023"});
}

void show_animals()
{   
    for(auto item : caballos) std::cout << " " << item << std::endl;
    for(auto item : camals) std::cout << " " << item << std::endl;
    for(auto item : donkeys) std::cout << " " << item << std::endl;
    for(auto item : dogs) std::cout << " " << item << std::endl;
    for(auto item : cats) std::cout << " " << item << std::endl;
    for(auto item : hamsters) std::cout << " " << item << std::endl;
}

void create_animal()
{
    int type_num{};
    int race1_num{};
    int race2_num{};
    string animal_name{};
    string animal_birthdate{};
    
    cout << "Do you want to add a pack_animal or a pet_animal?" << endl;
    cout << " 1 - for pack_animal" << "\n 2 - for pet_animal\n";
    cin >> type_num;
    
    switch(type_num)
    {
        case 1:
            cout << "Choose the race of the animal" 
                 << "\n 1 - Caballos"
                 << "\n 2 - Camals"
                 << "\n 3 - Donkeys\n";
            cin >> race1_num;
            break;
        case 2:
            cout << "Choose the race of the animal" 
                 << "\n 1 - Dogs"
                 << "\n 2 - Cats"
                 << "\n 3 - Hamsters\n";
            cin >> race2_num;
            break;
        default: cout << "Bad answer!" << endl;
    }
    
    if(race1_num > race2_num)
    {
        switch(race1_num)
        {
            case 1:
                cout << "Enter name: ";
                cin.ignore(1000, '\n');
                getline(cin, animal_name);
                cout << "Enter Birthdate: ";
                cin >> animal_birthdate;
                caballos.push_back({animal_name, animal_birthdate});
                break;
            case 2:
                cout << "Enter name: ";
                cin.ignore(1000, '\n');
                getline(cin, animal_name);
                cout << "Enter Birthdate: ";
                cin >> animal_birthdate;
                camals.push_back({animal_name, animal_birthdate});
                break;
            case 3:
                cout << "Enter name: ";
                cin.ignore(1000, '\n');
                getline(cin, animal_name);
                cout << "Enter Birthdate: ";
                cin >> animal_birthdate;
                donkeys.push_back({animal_name, animal_birthdate});
                break;
        }
    }
    else
    {
        switch(race2_num)
        {
            case 1:
                cout << "Enter name: ";
                cin.ignore(1000, '\n');
                getline(cin, animal_name);
                cout << "Enter Birthdate: ";
                cin >> animal_birthdate;
                dogs.push_back({animal_name, animal_birthdate});
                break;
            case 2:
                cout << "Enter name: ";
                cin.ignore(1000, '\n');
                getline(cin, animal_name);
                cout << "Enter Birthdate: ";
                cin >> animal_birthdate;
                cats.push_back({animal_name, animal_birthdate});
                break;
            case 3:
                cout << "Enter name: ";
                cin.ignore(1000, '\n');
                getline(cin, animal_name);
                cout << "Enter Birthdate: ";
                cin >> animal_birthdate;
                hamsters.push_back({animal_name, animal_birthdate});
                break;
        }
    }      
}

void show_all_commands()
{
    if(!caballos.empty())
    {
        cout << "Caballos: " << endl;
        caballos[0].show_commands();
    }
    if(!camals.empty())
    {
        cout << "Camals: " << endl;
        camals[0].show_commands();
    }
    if(!donkeys.empty())
    {
        cout << "Donkeys: " << endl;
        donkeys[0].show_commands();
    }
    if(!dogs.empty())
    {
        cout << "Dogs: " << endl;
        dogs[0].show_commands();
    }
    if(!cats.empty())
    {
        cout << "Cats: " << endl;
        cats[0].show_commands();
    }
    if(!hamsters.empty())
    {
        cout << "Hamsters: " << endl;
        hamsters[0].show_commands();
    }
}

void add_new_command()
{
    int num{};
    string command_name{};
    
    cout << "What race of animal do you want to train?" << endl;
    cout << " 1 - for Caballos" 
         << "\n 2 - for Camals"
         << "\n 3 - for Donkeys"
         << "\n 4 - for Dogs"
         << "\n 5 - for Cats"
         << "\n 6 - for Hamsters\n";
    cin >> num;
    
    switch(num)
    {
        case 1:
            cout << "Enter a new command: ";
            cin.ignore(1000, '\n');
            getline(cin, command_name);
            if(!caballos.empty()) caballos[0].add_command(command_name);
            break;
        case 2:
            cout << "Enter a new command: ";
            cin.ignore(1000, '\n');
            getline(cin, command_name);
            if(!camals.empty()) camals[0].add_command(command_name);
            break;
        case 3:
            cout << "Enter a new command: ";
            cin.ignore(1000, '\n');
            getline(cin, command_name);
            if(!donkeys.empty()) donkeys[0].add_command(command_name);
            break;
        case 4:
            cout << "Enter a new command: ";
            cin.ignore(1000, '\n');
            getline(cin, command_name);
            if(!dogs.empty()) dogs[0].add_command(command_name);
            break;
        case 5:
            cout << "Enter a new command: ";
            cin.ignore(1000, '\n');
            getline(cin, command_name);
            if(!cats.empty()) cats[0].add_command(command_name);
            break;
        case 6:
            cout << "Enter a new command: ";
            cin.ignore(1000, '\n');
            getline(cin, command_name);
            if(!hamsters.empty()) hamsters[0].add_command(command_name);
            break;
        default: cout << "Bad answer!" << endl;
    }
}