#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;



int main ()

{
	int totalGrades;      // This is the total number of test grades
	int grade;            // This is the student's test grade
	ifstream inFile;      // This is a declaration of the inFile that holds all the grades
	string fileName;      // This is the filename that the user will enter
	string name;          // This is the name of the student
	int gradeCount;       // This is to keep count of the number of grades entered
	const int MIN = 101;  // This is a constant MIN used to find the lowest score
	int min;              // The lowest score
	int sum;              // The sum of all the grades
	float average;        // The average of all the grades
	
	
	
	// Prompts the user to input the file name that will be read and assigns it
	//  to fileName
	
	cout << "Enter the input file name: ";
	cin >> fileName;
	
	// Open the file with the grades
	
	inFile.open(fileName.c_str ());
	
	// Check to make sure the file opened correctly
	
	if (!inFile)
	{
		cout << "File did not open correctly" << endl;
		return 1;
	}
	
	// Read in the number of tests
	
	inFile >> totalGrades;
	
	// Display the output heading
	
	cout << "Student" << setw(9) << "Average" << endl;
	
	// Read in the first student name
	
	inFile >> name;
	
	// Begin the end of file loop
	
	while (inFile)
	{
		// Print out the name
		cout << name;
		
		// Set gradeCount equal to zero
		
		gradeCount = 0;
		
		// Initialize the lowest grade
		
		min = MIN;
		
		// Initialize the sum
		
		sum = 0;
		
		// Calculate and display the student's average with one score dropped
		
		while (gradeCount < totalGrades)
		{
			// Read in the grade
			
			inFile >> grade;
			
			// Find the sum of the the grades
			
			sum = sum + grade;
			
			// Find out if the grade is the lowest grade
			
			if (grade < MIN)
				min = grade;
			
			gradeCount++;
		}
		
		// Calculate and display average
		
		average = (sum - min) / (totalGrades - 1);
		
		cout << setw(10) << average << endl;
		
		inFile >> name;
			
	}
	
	return 0;
}
