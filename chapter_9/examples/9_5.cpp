/* This program shows how the different pointers can point to same data variable.
	Written by: Shreevathsa.
	Date: 04-05-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int  a;
	int* p = &a;
	int* q = &a;
	int* r = &a;
	
	cout << "\"Enter three numbers and key return\"\n";
	cin  >> a;

	cout << setw(3) << *p << endl;
	cout << setw(3) << *q << endl;
	cout << setw(3) << *r << endl;
	return 0;
}
