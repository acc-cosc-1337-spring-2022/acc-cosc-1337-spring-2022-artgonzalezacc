#include "constants.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    auto radius = 0;
    cout<<"Enter a number: ";
    cin>>radius;

    cout<<get_area_of_circle(radius);

    return 0;
}