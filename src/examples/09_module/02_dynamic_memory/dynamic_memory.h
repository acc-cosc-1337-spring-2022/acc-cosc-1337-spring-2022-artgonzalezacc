//Create allocate and release function
#include<iostream>
#include<memory>

void use_dynamic_memory(const int num);
int* get_dynamic_memory(const int num);
void limit_dynamic_memory_scope(const int num);
int* get_dynamic_array(const int num);
void delete_dynamic_array(int* array);
void use_dynamic_array(const int num);