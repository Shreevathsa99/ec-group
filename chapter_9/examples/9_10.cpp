/* Test driver for quadratic function.
	Written by: Shreevathsa
	Date: 07-05-2019
*/
#include<iostream>
#include<cmath>
using namespace std;

void getData      (int*       a, int* b, int* c);

int  quadratic    (int        a, int  b, int  c,
		   double* pRoot1, double* pRoot2, double &root);

void printResults (int numRoots, 
		   int        a, int  b, int  c, 
		   double root1, double root2/*, double root*/); 
int main(){
	cout << "Solve quadratic equations.\n\n";
	char again = 'Y';
	while(again == 'Y' || again == 'y'){
		int    a;
		int    b;
		int    c;
		getData (&a, &b, &c);

		double root1;
		double root2;
		double root;
		int numRoots = quadratic(a, b, c, &root1, &root2, root);
		printResults(numRoots, a, b, c, root1, root2/*, root*/);

		cout << "\nDo you have another equation (Y/N): ";
		cin  >> again;
	}
	cout << "\nThank you.\n";
	return 0;
}
void getData(int* a, int* b, int* c){
	cout << "Please enter coefficients a, b, & c: ";
	cin  >> *a >> *b >> *c;
	return;
}

int  quadratic (int        a, int  b, int  c,
		double* pRoot1, double* pRoot2, double& root){
	int result;
	// if a and b coefficients are equal to zero
	if(a == 0 && b == 0)
		result = -1;
	// if a coefficients are equal
	else if(a == 0){
		*pRoot1 = -c / (double) b;
		result = 1;
	}
	// else
	else{
		double discriminant = b * b - (4 * a * c);
		if(discriminant >= 0)
		{
		         root   = sqrt(discriminant);
			*pRoot1 = (-b + root) / (2 * a);
			*pRoot2 = (-b - root) / (2 * a);
			 result = 2;
		}
		else
			return 0;
	}
	return result;
}
void printResults(int numRoots, int a, int b, int c, double root1, double root2/*, double root*/){
	cout << "Your equation: " << a << " x**2 + " << b << "x + " << c << endl;
	switch(numRoots){
		case 2: cout << "Roots are: " << root1 << " & " << root2 << endl;
			break;
		case 1: cout << "Only one root: " << root1 << endl;
			break;
		case 0: cout << "Roots are imaginary:\n" << endl; //<< -b / (2 * a) << "i " << "+" << root / (2 * a) << " & " << a << "i" << "-" << root / (2 * a)<< endl;
			break;
		default: cout << "Invalid coefficients\n";
			 break;
	}
	return;
}
