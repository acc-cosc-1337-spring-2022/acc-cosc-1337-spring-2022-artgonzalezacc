//
#include<cstddef>//for std::size_t very large int
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

template<typename T>
class Vector
{
public:
    Vector();
    Vector(std::size_t s);
    Vector(const Vector<T>& v);//copy constructor Rule 1 of 3 - Rule of 3 c++ legacy
    Vector<T>& operator=(const Vector<T>& v);//copy assignment Rule 2 of 3 - Rule of 3 legacy c++
    Vector(Vector<T>&& v);//Rule 4 of 5 for Rule of 5 - modern C++
    Vector<T>& operator=(Vector<T>&& v);//Rule 5 of 5-modern c++
    std::size_t Size()const{return size;}
    std::size_t Capacity()const{return capacity;}
    T& operator[](std::size_t i) {return elements[i];}//v[0] = 5;
    T& operator[](std::size_t i)const{return elements[i];}//cout<<v[0];
    void Reserve(std::size_t new_allocation_size);
    void Resize(std::size_t new_allocation_size);
    void PushBack(T value);
    ~Vector();//destructor Rule 3 of 3 -Rule of 3 legacy c++

private:
    std::size_t size; //number of elements in the vector
    std::size_t capacity; //number of elements + free slots
    T* elements;    //dynamic array of ints
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};

};

//free functions-NOT PART OF THE CLASS
void use_stack_vector();
void use_heap_vector();
Vector<int> get_vector();

#endif
