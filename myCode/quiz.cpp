#include <iostream>


using namespace std;

/*void process_it(int list[],int size, int &S) {

	for(int I = 0; I < size; I++)
	S +=list[I]++;
}*/

int main()
{

	int list[5]={1,2,3,4,5};
	for(int i = 0; i < 5; i++)
	cout << list[i]++<< " ";
	cout << endl;


/*int num=0,list[5]={2,5,7,8,9};
process_it(list,5,num);

for(int i = 0;i<5;i++)
	cout << list[i]<<" ";
cout << num << endl;*/

/*int list[5] = {0};

for (int I = 1; I < 5; I++)
	list[I] = 2 * I + 1;
for(int I = 0; I < 5 ; I++)
	cout << list[I]<<" ";
*/
	
}
