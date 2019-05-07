/* Read integers from keyboard & print them multiplied by 2.
 *	Written by: Shreevathsa.
 *	Date	  : 07-05-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

const short cSIZE = 5;

void multiply (int* pAry);

int main(){
	/*code*/
	
	int ary [cSIZE];

	int* pLast = ary + cSIZE - 1;
	for (int* pWalk = ary; pWalk <= pLast; pWalk++) {
		cout << "Please enter an integer: ";
		cin  >> *pWalk;
	}
	multiply(ary);
	cout << "Doubled size is: \n";
	for (int* pWalk = ary; pWalk <= pLast; pWalk++) {
		cout << setw(4) << *pWalk << endl;
	}

	return 0;
}
void multiply(int* pAry){
	int* pLast = pAry + cSIZE - 1;
	for (int* pWalk = pAry; pWalk <= pLast; pWalk++) {
		*pWalk = *pWalk * 2;
	}
	return;
}
