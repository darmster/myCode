// MovieType.h
//----------------------
#include "ListA.h"			
#ifndef __MOVIETYPE_H__
#define __MOVIETYPE_H__

#include <iostream>
#include <string>
#include <fstream>
using namespace std;	

class MovieType	
{
	friend ostream& operator<<(ostream& os, const MovieTyoe& p);
private:
	string m_stars;
	string m_studio
	int m_recipts;
	int m_year;
	string m_title;		// THIS IS THE "key"
public:
	MovieType(string title, int year, int recipts, string studio, string stars );
	MovieType();
	void Initialize(string m_title, int m_year, int m_reciptsts, string m_studio, string m_stars );
	void print(ostream& os = cout) const;
	int compareKeys(const MovieType& p2) const;
	int getKey() const;	// should be a const function
	void setKey(int key);
	bool operator==(const MovieType& p2) const;
	// p1 == p2  same as p1.operator=(p2)
} ;

#endif
