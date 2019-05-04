/* This program shows how the same pointer can point to different data variables in different statements.
	Written by: Shreevathsa.
	Date: 04-05-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int  a;
	int  b;
	int  c;
	int* p;
	
	cout << "\"Enter three numbers and key return\"\n";
	cin  >> a >> b >> c;

	p = &a;
	cout << setw(3) << *p << endl;
	p = &b;
	cout << setw(3) << *p << endl;
	p = &c;
	cout << setw(3) << *p << endl;
	return 0;
}
