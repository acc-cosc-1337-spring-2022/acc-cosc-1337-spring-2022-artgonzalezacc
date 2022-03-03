#include<iostream>
/*
Write function prototype for pass_by_val_and_ref with
a value int and ref int parameter.
*/
void pass_by_val_and_ref(int num1, int &num2);//num1 is a copy/value parameter==num2 is a reference parameter



/*
Write function prototype for pass_by_const_ref with
const int reference parameter
*/
void pass_by_const_ref(const int &num);

void static_var();
void static_var1();

double get_total(double amount, double rate=.0825);
double get_totals(double amount, double num=.5, double rate=.0825);

double get_weekly_pay(double salary);
double get_weekly_pay(double hours, double rate);