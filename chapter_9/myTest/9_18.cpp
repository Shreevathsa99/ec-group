/*Program to check smaller number using function as pointer
*/

#include<iostream>
using namespace std;

int* smaller(int* px, int* py); 

int main(){
	int  a;
	int  b;
	int *p;

	cout << "Enter a number and press return\n";
	cin  >> a >> b;
	p = smaller(&a , &b);
	cout << "The smaller number is: " << *p << endl;
	return 0;
}

int* smaller(int* px, int* py){
	return(*px < *py ? px : py);
}
