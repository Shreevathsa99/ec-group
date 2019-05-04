/* This program adds two numbers using pointers, to demonstrate the concept of pointers.
	Written by: Shreevathsa.
	Date: 04-05-2019.
*/
#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	int r;
	int* pa = &a;
	int* pb = &b;
	int* pr = &r;

	cout << "\nEnter the first number: ";
	cin  >> *pa;
	cout << "Enter the second number: ";
	cin  >> *pb;

	*pr = *pa + *pb;

	cout << endl;
	cout << *pa << " + " << *pb << " is " << *pr << endl;
	return 0;
}
