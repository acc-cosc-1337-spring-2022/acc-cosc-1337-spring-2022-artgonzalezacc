#include "do_while.h"

using std::cout; using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto cont = 'n';//scope is the do code block
        
    do
    {
        cout<<"Continue, enter y?";
        cin>>cont;
    }
    while(cont == 'y');
}

void display_menu()
{
    cout<<"1 Option 1\n";
    cout<<"2 Option 2\n";
    cout<<"3 Exit\n";
}

void run_menu()
{
    auto option = 0;
    do
    {
        display_menu();
        //validate data
        cout<<"Enter a number ";
        cin>>option;

        handle_menu_option(option);
    }
    while(option != 3);
}

void handle_menu_option(int option)
{
    switch(option)
    {
    case 1:
        cout<<"Selected option 1\n";
        break;
    case 2:
        cout<<"Selected option 2\n";
        break;
    case 3:
        cout<<"Selected exit\n";
        break;
    default:
        cout<<"Invalid option\n";
    }
}

