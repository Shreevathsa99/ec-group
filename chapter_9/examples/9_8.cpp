/* Demonstrate writing pointer values.
	Written by: Shreevathsa.
	Date: 06-03-2019.
*/
#include<iostream>
using namespace std;

int main(){
	int  anInt = 1234;
	int* pInt  = &anInt;
	cout << "anInt is located at: " << &anInt << endl;
	cout << "pInt's value is    : " << pInt << endl;
	
	//char hello = "Hello";
        char* pChar = "Hello";
	//pChar = &hello;
	cout << "pChar points to : " << pChar << endl;
	cout << "pChar's value is: " << static_cast<void*> (pChar) << endl;

	return 0;
}
