// ********************************************************* 
// Header file ListA.h for the ADT list 
// Array-based implementation 
// ********************************************************* 
#pragma once
#include "MovieType.h"
const int MAX_LIST = 10; //maximum-size-of-list; 
//typedef desired-type-of-list-item ListItemType; 
typedef Person ListItemType; 


class List 
{ 
public: 
	List();  // default constructor 
	// destructor is supplied by compiler 

	// list operations: 
	bool isEmpty() const; 
	// Determines whether a list is empty. 
	// Precondition: None. 
	// Postcondition: Returns true if the list is empty; 
	// otherwise returns false. 

	int getLength() const; 
	// Determines the length of a list. 
	// Precondition: None. 
	// Postcondition: Returns the number of items 
	// that are currently in the list. 

	bool insert(int index, ListItemType newItem); 
	// Inserts an item into the list at position index. 
	// Precondition: index indicates the position at which 
	// the item should be inserted in the list. 
	// Postcondition: If insertion is successful, newItem is 
	// at position index in the list, and other items are 
	// renumbered accordingly, and true is returned; 
	// otherwise false is returned. 
	// Note: Insertion will not be successful if 
	// index < 0 or index > getLength(). 

	bool add(const ListItemType& newItem); 
	//  
	// Precondition: newItem is a valid ListItemType
	// Postcondition: Either
	//	1.	There is room in the list - in this case, newItem is added 
	//	    at the end of the list, and true is returned.
	//	2.	The list is full - in this case, and false is returned.
	//		

	int find(const ListItemType& itemToFind) const;
	//  
	// Precondition: itemToFind.m_id is valid.
	// Postcondition: Either
	//	1.	There is an item in the list whose id matches 
	//		itemToFind.m_id - in this case, the index of the match is returned.
	//	2.	No item in the list matches itemToFind.m_id - in this case, 
	//		-1 is returned.

	bool findAndRemove(const ListItemType& itemToFind);
	//  
	// Precondition: itemToFind.m_id is valid.
	// Postcondition: Either
	//	1.	There is an item in the list whose id matches 
	//		itemToFind.m_id - in this case, the matching item is removed from
	//		the list and true is returned.
	//	2.	No item in the list matches itemToFind.m_id - in this case, 
	//		false is returned.

	bool findAndRetrieve(ListItemType& itemToFind) const;
	//  
	// Precondition: itemToFind.m_id is valid.
	// Postcondition: Either
	//	1.	There is an item in the list whose id matches 
	//		itemToFind.m_id - in this case, the matching item's data is 
	//		stored in itemToFind and true is returned.
	//	2.	No item in the list matches itemToFind.m_id - in this case 
	//		false is returned.

	void display() const;
	//  
	// Precondition: The list is valid.
	// Postcondition: The list is displayed to cout.

private: 
	// data
	ListItemType items[MAX_LIST];  // array of list items 
	int          size;             // number of items in list 

	// helper functions:
	bool remove(int index); 
   // Deletes an item from the list at a given position. 
   // Precondition: index indicates where the deletion 
   // should occur. 
   // Postcondition: If 0 <= index < getLength(), 
   // the item at position index in the list is 
   // deleted, other items are renumbered accordingly, 
   // and true is returned; otherwise false is returned. 
 
   bool retrieve(int index, ListItemType& dataItem) const; 
   // Retrieves a list item by position. 
   // Precondition: index is the number of the item to 
   // be retrieved. 
   // Postcondition: If 0 <= index < getLength(), 
   // dataItem is the value of the desired item and 
   // true is returned; otherwise false is returned. 
 


};  // end List class 
// End of header file. 


