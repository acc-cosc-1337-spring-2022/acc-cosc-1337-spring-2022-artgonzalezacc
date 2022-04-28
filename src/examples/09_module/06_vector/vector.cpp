#include "vector.h"

using std::cout;

/*
Vector::Vector()
 : size(0)
{

}*/

Vector::Vector(std::size_t s)
 : size(s), elements{new int[s]}//create the dynamic array of size s
{
    cout<<"Constructor(s)-create memory"<<elements<<"\n";
}

Vector::~Vector()
{
    cout<<"Destructor-delete memory at "<<elements<<"\n";
    delete[] elements;
}

//FREE FUNCTIONS
void use_stack_vector()
{
    Vector v(3);//constructor Vector(s) is executed/dynamic memory created
}

void use_heap_vector()
{
    Vector* v = new Vector(3);//create dynamic memory
    //use memory
    delete v;//delete memory
}