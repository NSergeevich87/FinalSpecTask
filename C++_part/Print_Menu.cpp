#include "Print_Menu.h"
#include <iostream>
#include <iomanip>

using namespace std;

int print()
{
    const int field{63};
    const int left_f{23};
    const int right_f{40};
    
    int answer{};
    cout << "\n" << setfill('=') << setw(field) << "" << endl;
    cout << setfill(' ') << endl;
    cout << setw(left_f) << left << "Enter: 1" << setw(right_f) << right << "to see all the animals of the reserve" << endl;
    cout << setw(left_f) << left << "Enter: 2" << setw(right_f) << right << "to add a new Animal" << endl;
    cout << setw(left_f) << left << "Enter: 3" << setw(right_f) << right << "to show all commands" << endl;
    cout << setw(left_f) << left << "Enter: 4" << setw(right_f) << right << "to add a new command for an Animal" << endl;
    cout << setw(left_f) << left << "Enter: 0" << setw(right_f) << right << "for EXIT" << endl;
    cout << "Enter the number: ";
    cin >> answer;
    
    return answer;
}