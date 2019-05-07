/* Program to convert Julian date to month and day.	
 *	Written by: Shreevathsa.
 *	Date	  : 07-05-2019.
*/
#include<iostream>
#include<iomanip>	
using namespace std;

void convertor(int julian, int year, int* month, int* day);

int main(){
	/*code*/
	
	int julian;
	cout << "Enter the julian date: ";
	cin  >> julian;

	int year;
	cout << "\nEnter the year: ";
	cin  >> year;
	
	int month;
	int day;
	convertor(julian, year, &month, &day);
	return 0;
}
void convertor(int julian, int year, int* month, int* day){
	
//	*month = julian / 30;
//	*day   = julian % 30;
	switch(julian){
		case 32: *month =
	}
	cout << "Month: " << *month << endl;
	cout << "Day:   " << *day << endl;
	return ;
}
