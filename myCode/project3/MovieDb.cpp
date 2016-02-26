// Main() //-----------------------------

//#include "ListA.h" // ADT list operations
//#include "MovieType.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class MovieType
{
	private:
		string title;
	public:
		MovieType();
		MovieType(string title);
		void display();
	//	string getTitle();
		int compareKeys(MovieType *other);
};
class SortedMovieList
{
	private:
		static const int MAXSIZE = 50;
		MovieType *movies[MAXSIZE];
		int count;
		int findInsertPosition(MovieType *movie);
	public:
		SortedMovieList();
		void insert(MovieType *movie);
		void displayMovies();
};
int main()
{
	// test string "compare"
/*	string s1 = "cat", s2 = "cat";
	cout << s1.compare(s2) << endl;
	return;
	// Test MovieType class
	// ~~~~~~~~~~~~~~~~~
	MovieType p;

	p.Initialize("Hank",44,6543);
	//cout << p << endl;

	MovieType p2("Sue",33,1934),p3("Betty",44,9888),p4("Bill",13,9001),
		p5("John",22,9812);

	////if( p > p3 ) ....???
	//if(p.compareKeys(p3) > 0)	// p > p3
	//	cout << "p > p3 \n";
	//else
	//	cout << "p <= p3 \n";
	//
	//// reset data in p
	//p.Initialize("Betty",44,9888);
	////if(p.compareKeys(p3) == 0)	// p== p3
	//if( p == p3 )
	//	cout << "new p == p3 \n";
	//else
	//	cout << "new p != p3 \n";
	//=======================================================

	// Test List class
	// ~~~~~~~~~~~~~~~
	List l;

	// reset data in p
	p.Initialize("Hank",44,6543);

	l.add(p);
	l.add(p2);
	l.add(p3);
	l.add(p4);
	l.add(p5);

	l.display();


	//========================
	
	cout << "+++++++++++++++++++++++++++++++++++++++++++" << endl;
	MovieType dataItem;
	dataItem.setKey(1934);	// only id field is set in dataItem
	if( l.findAndRetrieve(dataItem) )
		cout << dataItem;
	else
		cout << "Could not find data with key: "<< dataItem.getKey() << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++" << endl;
	dataItem.setKey(9001);
	if( l.findAndRemove(dataItem) )
		cout << dataItem;
	else
		cout << "Could not find data with key: "<< dataItem.getKey() << endl;
	l.display();
*/
	 cout << "Hello world" << endl;
	 string title;
  ifstream myfile ("titles.txt");
  SortedMovieList movieList;
  if (myfile.is_open())
  {
    while ( myfile.good())
    {
      getline (myfile,title);
      if (title == "***")
        break;
      MovieType *movie = new MovieType(title);
      //movie->display();
      movieList.insert(movie);
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 
	
  movieList.displayMovies();
}  // end main

void MovieType::display()
{
	cout << "Title: " << title << endl;
}
MovieType::MovieType()
:title("")
{}

MovieType::MovieType(string aTitle)
{
	title=aTitle;
}
/*
string MovieType::getTitle()
{
	return title;
}
*/
int MovieType::compareKeys(MovieType *other)
{
	return title.compare(other->title);
}

SortedMovieList::SortedMovieList()
{
	count = 0;
}

int SortedMovieList::findInsertPosition(MovieType *movie)
{
	for (int i = 0; i < count; i++)
	{
		if (movie->compareKeys(movies[i]) < 0)
		{
			return i;
		}
	}
	return count;
}

void SortedMovieList::insert(MovieType *movie)
{
	int insertPosition = findInsertPosition(movie);
	for (int i = count; i > insertPosition; i--)
	{
		movies[i] = movies[i-1];
	}
	movies[insertPosition] = movie;
	count++;
}


void SortedMovieList::displayMovies()
{
	for (int i = 0; i < count; i++)
	{
		movies[i]->display();
	}
}
