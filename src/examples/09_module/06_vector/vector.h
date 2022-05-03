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
    Vector(const Vector& v);//copy constructor Rule 1 of 3 - Rule of 3 c++ legacy
    Vector& operator=(const Vector& v);//copy assignment Rule 2 of 3 - Rule of 3 legacy c++
    std::size_t Size()const{return size;}
    int& operator[](std::size_t i) {return elements[i];}
    int& operator[](std::size_t i)const{return elements[i];}
    ~Vector();//destructor Rule 3 of 3 -Rule of 3 legacy c++

private:
    std::size_t size; //track vector size
    int* elements;    //dynamic array of ints

};

//free functions-NOT PART OF THE CLASS
void use_stack_vector();
void use_heap_vector();

#endif
