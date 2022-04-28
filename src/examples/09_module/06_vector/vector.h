//
#include<cstddef>//for std::size_t very large int
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    //Vector();
    Vector(std::size_t s);
    std::size_t Size()const{return size;}
    ~Vector();

private:
    std::size_t size; //track vector size
    int* elements;    //dynamic array of ints

};

//free functions-NOT PART OF THE CLASS
void use_stack_vector();
void use_heap_vector();

#endif
