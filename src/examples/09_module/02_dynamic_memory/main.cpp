#include "dynamic_memory.h"
#include<memory>

using std::cout; using std::unique_ptr; using std::make_unique;

int main() 
{
	/*int* num = new int(5);//create dynamic memory
	cout<<"\nRaw/Naked Pointer value: "<<*num<<"\n";//use memory
	delete num;//delete memory
	num = nullptr;

	unique_ptr<int> num1 = make_unique<int>(10);
	cout<<"\nNum1 value: "<<*num1<<"\n";*/
	//use_dynamic_memory(3);
	//limit_dynamic_memory_scope(3);
	use_dynamic_array(3);
	cout<<"Exited function\n";

	return 0;
}