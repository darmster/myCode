#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string fileName, first, last, id;
        double average = 0.0;
        int units,points;

        // prompt for input file
        cout << "Enter a file name: ";
        getline(cin, fileName);
        ifstream inFile(fileName.c_str(), ios::in);     //read in file
        ofstream outFile;                               // output results
        outFile.open("assign_out.txt");

        // verify file is present
        if (!inFile)
        {
                cout << "No file exists " << endl;
                return 1;
        }

        // Display heading
        cout << "Name" << setw(25) << "ID#" << setw(20) << "Units " << setw(15) << "GPA " <<  endl;
        cout << setfill('-');
        cout << setw(65) << '-' <<  endl;

        // Read in the first student name
       /* while (inFile) {
                cout << setfill(' ');
                inFile >> first >> last >> id >> units;
                cout << first << last << setw(25)<< id << setw(20)<< units << endl;
        }*/
	while (inFile) {
		cout << inFile << endl;
	}

        inFile.close();

        return 0;
}
