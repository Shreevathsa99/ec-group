/* Demonstration of changing value of pointer value also change the value of pointed memory.
	Written by: Shreevathsa.
	Date: 03-05-2019.
*/

#include<iostream>
using namespace std;

int main(){

	int a = 10;
	int b = a;
	int* p;
	 p = &a;
	 *p = 20;
	
	 cout << "previous value of a: " << b << endl;
	 cout << "present value of a : " << a << endl;
	 cout << "pointer value      : " << *p << endl;
	 return 0;
}
