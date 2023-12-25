#include <iostream>
#include "Base_Animals.h"
#include "Print_Menu.h"
#include "Answer_Work.h"
#include "Caballo.h"
#include <iomanip>

using namespace std;

void add_some_animals()
{
    Caballo n1 {"Mustang", "10-10-2020"};
    caballos.push_back(n1);
}

int main()
{   
    add_some_animals();
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

