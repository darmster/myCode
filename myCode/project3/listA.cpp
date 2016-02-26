// ********************************************************* 
// Implementation file ListA.cpp for the ADT list 
// Array-based implementation 
// ********************************************************* 
#include "ListA.h"  //header file 
List::List() : size(0) // member-initialization list
{ 
	//size = 0;
}   // end default constructor 
 
bool List::isEmpty() const 
{ 
   return size == 0; 
}  // end isEmpty 
 
int List::getLength() const 
{ 
   return size; 
} // end getLength 
 
bool List::insert(int index, ListItemType newItem) 
{ 
   bool success = (index >= 0) && (index <= size ) && (size < MAX_LIST); 
   if (success) 
   {  // make room for new item by shifting all items at 
      // positions >= index toward the end of the 
      // list (no shift if index == size) 
      for (int pos = size; pos > index; --pos) 
         items[pos] = items[pos-1]; 
	  //          
      // insert new item      
	  items[index] = newItem; 
      ++size;  // increase the size of the list by one 
   }  // end if 
   return success;
} // end insert 
 
bool List::remove(int index) 
{ 
   bool success = (index >= 0) && (index < size) ; 
   if (success) 
   {  // delete item by shifting all items at positions > 
      // index toward the beginning of the list 
      // (no shift if index == size) 
      for (int fromPosition = index; fromPosition < size-1; ++fromPosition) 
         items[fromPosition] = items[fromPosition + 1];
      --size;  // decrease the size of the list by one 
   }  // end if 
   return success;
}  // end remove 
 
bool List::retrieve(int index, ListItemType& dataItem) const 
{ 
   bool success = (index >= 0) && (index < size); 
   if (success) 
      dataItem = items[index]; 
   return success;
} // end retrieve 
// 
bool List::add(const ListItemType& newItem)
{
	// is there room?
	if( size <  MAX_LIST  )
	{
		items[size++] = newItem;

		return true;
	}
	
	return false;
}

int List::find(const ListItemType& itemToFind) const
{
	for( int i = 0; i < size; i++ )
		//if( items[i].getKey() == itemToFind.getKey() )
		if( items[i] == itemToFind )
			return i;
	
	return -1;
}

void List::display() const
{
	for( int i = 0; i < size; i++ )
		cout << items[i]<< endl << "==========================" << endl;
}

bool List::findAndRemove(const ListItemType& itemToFind)
{
	return remove(find(itemToFind)); // nice, great!!!!!!!!!!!
	
	// SAME AS BELOW
	//int index = find(itemToFind);
	//if( index == -1 )
	//	return false;

	//// remove item at location "index"
	//return remove(index);
}

bool List::findAndRetrieve(ListItemType& itemToFind) const
{
	return retrieve(find(itemToFind),itemToFind);

	// SAME AS BELOW
	//int index = find(itemToFind);
	//if( index == -1 )
	//	return false;

	//// retrieve item at location "index"
	//return retrieve(index,itemToFind);
}
 
//  End of implementation file.
