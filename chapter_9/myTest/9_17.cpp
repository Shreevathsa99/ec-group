/*Program to exchange by three ways
*/
#include<iostream>
using namespace std;

void exchangePV(int  a, int  b);
void exchangePR(int& a, int& b);
void exchangePP(int* a, int* b);

int main() {
	int x1 = 10;
	int y1 = 20;
	int x2 = 10;
	int y2 = 20;
	int x3 = 10;
	int y3 = 20;
	
	exchangePV( x1,  y1);
	cout << "Exchange by pass by value\n";
	cout << "x1 " << x1 << " y1 " << y1 << endl;

	exchangePR( x2,  y2);
	cout << "Exchange by pass by reference\n";
	cout << "x2 " << x2 << " y2 " << y2 << endl;
	
	exchangePP(&x3, &y3);
	cout << "Exchange by pass by pointers\n";
	cout << "x3 " << x3 << " y3 " << y3 << endl;
	
	return 0;
}

void exchangePV(int a, int b){
	int temp;
	temp = a;
	   a = b;
	   b = temp;
	   return;
}
void exchangePR(int& a, int& b){
	int temp;
	temp = a;
	   a = b;
	   b = temp;
	   return;
}
void exchangePP(int* a, int* b){
	int temp;
	 temp = *a;
	   *a = *b;
	   *b = temp;
	   return;
}
