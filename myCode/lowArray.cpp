#include <iostream>
#include <vector>

using namespace std;

///////////////////////////////////////////////

class LowArray
{
	private:
		vector<double> v;	//vector holds doubles 

	public:
//--------------------------------------------------
	LowArray(int max)		//constructor
		{ v.resize(max); }	//size of vector 
//--------------------------------------------------
	void setElem(int index, double value)	//put element into 
		{ v[index] = value; }		// array, at index
//-------------------------------------------------
	double getElem(int index)		//get element from
		{ return v[index]; }		//array, at index
//--------------------------------------------------
};	//end of class LowArray
////////////////////////////////////////////////////////
int main()
{
	LowArray arr(100);		//create a LowArray 
	int nElems = 0;			//number of items 
	int j;				// loop variable 
//---------------------------------------------------------=
	arr.setElem(0, 77);
	arr.setElem(1, 90);
	arr.setElem(2, 44);
	arr.setElem(3, 55);
	arr.setElem(4, 22);
	arr.setElem(5, 88);
	arr.setElem(6, 11);
	arr.setElem(7, 00);
	arr.setElem(8, 66);
	arr.setElem(9, 33);
	nElems = 10;			//now 10 elements in array 
//---------------------------------------------------------
	for (j=0; j<nElems; j++)	// display items 
		cout << arr.getElem(j) << " " <<  endl;
//----------------------------------------------------------
	int searchKey = 26;		// search for item
	for (j=0; j<nElems; j++)	// for each element,
		if(arr.getElem(j) == searchKey)		//found item?
			break;
	if (j == nElems)		// no
		cout << "Can't find " << searchKey << endl;
	else
		cout << "Found " << searchKey << endl;
//-----------------------------------------------------------
	double deleteKey = 55;		//delete value 55;
	cout << "Deleting element " << deleteKey << endl;
	for (j=0; j<nElems; j++)	//look for it
	if(arr.getElem(j) == deleteKey)
		break;
	for(int k=j; k<nElems; k++)	//higher ones count down
		arr.setElem(k, arr.getElem(k+1) );
	nElems--;			//decrement size
//----------------------------------------------------------
	for (j=0; j<nElems; j++)	//display items
		cout << arr.getElem(j) << " " << endl;
	return 0;
}	//end main


