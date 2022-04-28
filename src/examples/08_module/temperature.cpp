//function code
#include "temperature.h"

using std::cout; using std::ofstream; using std::ifstream;

void write_to_file()
{
    ofstream out_file;

    cout<<"Open file\n";
    out_file.open("names.dat");

    cout<<"Writing to file...\n";
    out_file<<"C++\n";
    out_file<<"Python\n";
    out_file<<"Java\n";

    cout<<"Close file\n";
    out_file.close();
}

void read_from_file()
{
    ifstream in_file;
    cout<<"Open file\n";
    in_file.open("names.dat");

    cout<<"Read from file\n";

    std::string name;

    if(in_file.is_open())
    {
        while(in_file>>name)
        {
            cout<<name<<"\n";
        }
    }

    cout<<"Close the file\n";
    in_file.close();

}