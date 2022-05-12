#include "vector.h"

using std::cout;

template<typename T>
Vector<T>::Vector()
 : size(0), capacity(0), elements{nullptr}
{

}

template<typename T>
Vector<T>::Vector(std::size_t s)
 : size(0), capacity{s}, elements{new T[s]} //create the dynamic array of size s
{
    cout<<"Constructor(s)-create memory"<<elements<<"\n";
}

/*
1 Initialize size for v1
2 Initialize memory for v1
3 copy element values from v to v1
*/
template<typename T>
Vector<T>::Vector(const Vector<T>& v)
: size{v.size}, elements{new T[v.size]}
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
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
    T* temp = new T[v.size];

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

/*
1-Get v.elements' memory
2-Get size from v
3-point v.elements to nothing(nullptr); set v size to 0
*/
template<typename T>
Vector<T>::Vector(Vector<T>&& v)//this will be v1
: size{v.size}, elements{v.elements}
{
    cout<<"Move constructor "<<elements<<"\n";
    v.size = 0;
    v.elements = nullptr;
}

/*
1-clear original dynamic memory from v (eliminate memory leak)
2-point elements to v.elements
3-get size from v
4-point v.elements to nullptr
5-set v.size to 0
*/
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)
{
    cout<<"Move assignment delete memory "<<elements<<"\n";
    delete elements;
    elements = v.elements;
    cout<<"Move assignment "<<elements<<"\n";
    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

/*
1-Make sure new allocation is greater than capacity
2-Create temp dynamic memory of size new allocation
3-Copy values from old memory array to temp array
4-Delete the old array
5-Set elements to temp memory array
6-Set capacity = new allocation size
*/
template<typename T>
void Vector<T>::Reserve(std::size_t new_allocation_size)
{
    if(new_allocation_size <= capacity)
    {
        return;
    }

    T* temp = new T[new_allocation_size];

    for(std::size_t i=0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    delete []elements;

    elements = temp;
    capacity = new_allocation_size;
}

/*
1-Call reserve function with new allocation size as parameter
2-Initialize elements beyond size
3-Set size to new allocation size
*/
template<typename T>
void Vector<T>::Resize(std::size_t new_allocation_size)
{
    Reserve(new_allocation_size);

    for(std::size_t i=size; i < new_allocation_size; i++)
    {
        elements[i] = 0;
    }

    size = new_allocation_size;
}

/*
1-If capacity 0 call reserve w Reserve Default Size
2-else if size == space call Reserve w space * reserve default multiplier
3-Set value to current element at size
4 Increment the size
*/
template<typename T>
void Vector<T>::PushBack(T value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

template<typename T>
Vector<T>::~Vector()
{
    cout<<"Destructor-delete memory at "<<elements<<"\n";
    delete[] elements;
}


//tell C++ what data type this template supports
template class Vector<int>;
template class Vector<double>;
template class Vector<char>;




//FREE FUNCTIONS
void use_stack_vector()
{
    Vector<int> v(3);//constructor Vector(s) is executed/dynamic memory created
}

void use_heap_vector()
{
    Vector<int>* v = new Vector<int>(3);//create dynamic memory
    //use memory
    delete v;//delete memory
}

Vector<int> get_vector()
{
    Vector<int> v(3);
    return v;
}