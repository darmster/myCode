#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

/*void bigFights(string &inz)
{
	string line;
	ifstream fights;
	fights.open(&inz);
	getline(fights,line);
	cout << line << endl;	
	fights.close();
}*/


int main()
{

 string line;
  ifstream myfile; //("boxers.txt");
/*  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,line);
      cout << line << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file" << endl;
*/
	myfile.open("boxers.txt");	
//	cout << myfile << endl;
//	getline(myfile,line);
	while(!myfile.eof()){
		getline(myfile,line);
		cout << line << endl;
	}
	myfile.close();
	
	cout << "End of list and now printing out the the bout listed in row 4. " << endl;
	
	myfile.open("boxers.txt");
	string matches[10];
	for (int i = 0; i < 5; i++)
	{
		getline(myfile,matches[i]);
	}
	cout << matches[4] << endl;
	myfile.close();

  	/*string file = "boxers.txt";
	cout << "from function" << endl;
	bigFights(file); */
	
	cout << "New datafile " << endl;
	ifstream newdata;
	string myztring;
	newdata.open("assign4.txt");
	while(!newdata.eof()){
		getline(newdata,myztring);
		cout << myztring << endl;
	}
	newdata.close();

	return 0;

}
