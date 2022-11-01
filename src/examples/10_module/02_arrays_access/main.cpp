#include "arrays_access.h"
#include<iostream>

int main()
{ 
    int numbers[5];
    ArrayList list(numbers);
    list.Add(5);
    list.Add(2);
    list.Add(10);
    list.Add(11);
    list.Delete(5);
    int* array = list.Get_Elements();
    std::cout<<list.Size()<<"\n";

    for(auto i=0; i < list.Size(); i++)
    {
        std::cout<<array[i]<<" \n";
    }
}
