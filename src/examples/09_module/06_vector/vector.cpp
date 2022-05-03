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

/*
1 Initialize size for v1
2 Initialize memory for v1
3 copy element values from v to v1
*/
Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    cout<<"Execute copy constructor "<<elements<<"\n";

    for(std::size_t i=0; i < v.size; ++i)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temporary memory for v1
2-Copy values from v into temporary memory v1
3-Delete v1 elements memory
4-Point elements memory to temporary memory
5-Return a reference to this vector
*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(std::size_t i=0; i < v.size; ++i)
    {
        temp[i] = v.elements[i];
    }

    delete[] elements;

    elements = temp;
    cout<<"Copy assignment operator "<<elements<<"\n";
    size = v.size;

    return *this;
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