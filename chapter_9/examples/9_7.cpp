/* Demonstrate size of pointer.
	Written by: Shreevathsa.
	Date: 31-03-2019.
*/
#include<iostream>
using namespace std;

int main(){
	char c;
	char* pc;
	int sizeofc = sizeof(c);
	int sizeofpc = sizeof(pc);
	int sizeofStarpc = sizeof(*pc);

	int a;
	int* pa;
	int sizeofa = sizeof(a);
	int sizeofpa = sizeof(pa);
	int sizeofStarpa = sizeof(*pa);

	double x;
	double* px;
	int sizeofx = sizeof(x);
	int sizeofpx = sizeof(px);
	int sizeofStarpx = sizeof(*px);

	cout << "sizeof(c): " << sizeofc << " | ";
	cout << "sizeof(pc): " << sizeofpc << " | ";
	cout << "sizeof(*pc): " << sizeofStarpc << " | " << endl;

	cout << "sizeof(a): " << sizeofa << " | ";
	cout << "sizeof(pa): " << sizeofpa << " | ";
	cout << "sizeof(*pa): " << sizeofStarpa << " | " << endl;

	cout << "sizeof(x): " << sizeofx << " | ";
	cout << "sizeof(px): " << sizeofpx << " | ";
	cout << "sizeof(*px): " << sizeofStarpx << " | " << endl;
	
	return 0;
}
