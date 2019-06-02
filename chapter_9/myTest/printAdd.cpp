/* Printing the address*/

#include<iostream>
using namespace std;

int main(){
	char  a = 'H';
	char  b = 'a';
	char* p; 

	p = &a;
	cout << *p << endl;

	p = &b;
	cout << *p << endl;
	return 0;
}
