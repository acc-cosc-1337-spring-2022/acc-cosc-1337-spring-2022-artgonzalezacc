#include "ref_pointers.h"

//
void ref_ptr(int& num1, int* num2)
{
    num1 = 10;
    *num2 = 20;
}
