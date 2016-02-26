#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
struct Data{
	string Name;
	float Avg, Min, Max;
	int Counter;
};

void Read_Data(ifstream &, Data &);
void Print_Data(Data);
void Process_Data(ifstream &, Data &);
int Read_List(Data [], int);
void Print_List(Data [], int);

int main() { 

	Data Course,List[10];
	int  size;

	size = Read_List(List, 10);
	if (size > 0)
		Print_List(List,size);

	return 0;
}

void Read_Data(ifstream &fin, Data &temp) {
	getline(fin,temp.Name);
	if(!fin.eof())
		Process_Data(fin,temp);
}

void Print_Data(Data Temp) {
	cout << endl << "Class Name: " << Temp.Name << endl;
	cout << "Class Average: " << Temp.Avg << endl;
	cout << "Lowest score:  " << Temp.Min << endl;
	cout << "Highest Score: " << Temp.Max << endl;
	cout << endl;
}

void Process_Data(ifstream &fin, Data &temp) {
	float score, tot = 0;
	int   count = 0;
	fin >> Score;
	if(Score > 0) {
		temp.Min = temp.Max = Score;
		while(Score > 0) {
			count++;
			tot += Score;
			if(Score > temp.Max)
				temp.Max = Score;
			if(Score < temp.Min)
				temp.Min = Score;
			fin >> Score;
		}
		temp.Avg = tot / count;
		temp.Counter = count;
	}
	else
		temp.Avg = temp.Max = temp.Min = temp.Counter = 0;
	fin.ignore(10,'\n');
}

int Read_List(Data List[], int size) {
	int	 i = 0;
	ifstream fin;
	string	 name;

	cout <<"Enter input file name: ";
	getline(cin, name);
	fin.open(name.c_str());
	if(fin.fail())
		cout << "Bad file name.\n";
	else
	{
		Read_Data(file,List[i]);
		while (!fin.eof()){
			i++;
			if (i < size)
				Read_Data(fin,List[i]);
			else
			{
				cout <<"Array is full. \n"";
				break;
			}
		}
		fin.close();
	}
	return i;
}

void Print_List(Data List[], int size){
	cout << "\n----------------------------Table of classes-------------------------\n";
	cout << left << setprecision(2) << showpoint << fixed;
	cout << setw(25) <<"Name" <<setw(10) << "Average" << setw(12) << "High score" << "Number of scores" << endl;
	cout <<"\n----------------------------------------------------------------------\n";
		for (int j=0;j<ssize;j++)
			cout << setw(25)<<List[j].Name << setw(10)<<List[j].Avg << setw(12)<<List[j]<<List[j].Min << setw(12) << List[j].Max << List[j].Counter<<endl;
		cout <<"\n---------------------------------------------------------------\n";
		cout << endl;
}
