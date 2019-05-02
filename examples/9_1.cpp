/* Demonstrate pointer use.
	Written by: Shreevathsa.
	Date: 03-05-2019.
*/
#include<iostream>
using namespace std;

int main(){
	int a;
	int* p;

	a = 14;
	p = &a;

	cout << a << " " << &a << endl;
	cout << p << " " << *p << " " << a << endl;
	return 0;
}
