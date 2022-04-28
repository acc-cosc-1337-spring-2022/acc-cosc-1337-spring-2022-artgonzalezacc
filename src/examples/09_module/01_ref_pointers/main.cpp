#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num = 5;
	int& num_ref = num;

	cout<<"Num value: "<<num<<"\n";
	cout<<"Num memory addresss "<<&num<<"\n";
	cout<<"Num value via num_ref "<<num_ref<<"\n";
	cout<<"Num ref using & operator"<<&num_ref<<"\n";

	num_ref = 10;

	cout<<"Num value: "<<num<<"\n";
	cout<<"Num value via num_ref "<<num_ref<<"\n";
	

	int num4 = 1000;
	num_ref = num4;
	cout<<"Num4 value via num_ref "<<num_ref<<"\n";
	cout<<"Num ref using & operator"<<&num_ref<<"\n";
	cout<<"Num4 memory addresss "<<&num4<<"\n";

	int num1 = 20;
	int* num1_ptr = &num1;//NOT DYNAMIC MEMORY

	cout<<"Num1: "<<num1<<"\n";
	cout<<"Num1 memory location: "<<&num1<<"\n";
	cout<<"Num1 value via num_ptr: "<<*num1_ptr<<"\n";//???REMEMBER TO DEREFERENCE THE POINTER FOR THE VALUE
	cout<<"Num1_ptr stores the address: "<<num1_ptr<<"\n";
	cout<<"Num1_ptr memory location: "<<&num1_ptr<<"\n";

	int num2 = 100;
	num1_ptr = &num2;
	cout<<"Num2 value via num_ptr: "<<*num1_ptr<<"\n";
 

	return 0;
}