#include <iostream>
#include "Caballo.h"

using namespace std;

int main()
{   
    Caballo Mustang2 {"Mus", "10.10.2020"};
    Caballo Mustang3 {"Mus"};
    Caballo Mustang4 {};
    
    cout << Mustang2 << endl;
    
    Mustang2.show_commands();
    Mustang2.play_command(0);
    
    for(auto i = 0; i < 5; ++i)
    {
        Mustang2.add_command("Run");
    }
    
    Mustang2.show_commands();
    
	
	cout << endl;
	return 0;
}		