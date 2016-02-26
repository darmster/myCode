/*
	CS 1 Dr. Ghyam
	Darmis Hoskins
	Assignment 5

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// functions protype

// to provide a welcome message including the programmer's name
void Header(void);
// To calculate an hourly paid worker and include over time (1.5 * regular pay for hours > 40)
float Salary(float Hours, float Pay_Rate);
//Print the information for one employee to the monitor.
void Print_it(float Hours, float Pay_Rate, float Tax_Rate, string Name);
// Prompt user forname, hours worked and pay rate and send them back to the calling program
void Read(float &hour, float &Pay_R, string &name);
// To verify hours (0 - 60) and Pay rate (positive numbers less than 500) are valid.
bool Verify(float Hours, float Pay_Rate);

int main (void)
{
	float Pay_Rate, Hours, Sal, Tax;
	const float Tax_Rate= (float)0.09;
	string name;

	Header();
	cout<<"\n\n ****\t  Salary Report  \t************\n";
	for(int i = 0; i < 6; i++) {
		Read(Hours,Pay_Rate,name);	// actual parameter
		Sal = Salary(Hours,Pay_Rate);	// actual parameter
//		Print_it(Hours,Pay_Rate,Sal, Tax_Rate,name);	// actual parameter
	}
	cout<<"\n\n\n**********\t End of report \t*******\n\n\n\n";

return 0;
}

// functions definitions 
void Header(void) {
	cout << "\n";
	cout << "******************************************" << endl;
	cout << "\t darmilabs Time Report" << endl;
	cout << "******************************************" << endl;
}

/*float Salary(float Hours, float Pay_Rate) {
	float sal = 0;
	float ot = 0;
	if (Hours <= 40) {
		return Hours * Pay_Rate;
	}
	else {// if (Hours > 40) {
		sal = Pay_Rate * 40;
		ot = (Hours - 40) * 1.5 * Pay_Rate;
		return sal + ot;
	}
}*/

/*void Print_it(float Hours, float Pay_Rate, float Tax_Rate, string Name) {
	cout << "Name:\t\t\t " << Name << endl;
	cout << "Hours Worked:\t " << Hours << endl;
	cout << "Wages per hour:\t " << Pay_Rate << endl;
	cout << "Gross Salary:\t " << Pay_Rate * Hours << endl;
	cout << "Taxes:\t\t\t " << Tax_Rate << endl;
	cout << "Net Salary:\t\t " << "fix me" << endl;
}*/

void Read(float &Hours, float &Pay_R, string &name) {
	cout << "Enter Name: ";
	cin >> name;
	cout << endl;
	cout << "Enter the hours worked: ";
	cin >> Hours;
	cout << endl;
	cout << "Please enter pay rate: ";
	cin >> Pay_R;
	cout << endl;
}

/*bool Verify(float Hours, float Pay_Rate) {

	if ((Hours < 0 || Hours > 60) || (Pay_Rate < 0 || Pay_Rate > 500))
		return false;
	else
		return true;
}*/

