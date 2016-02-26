// MovieType.cpp
//------------------------
#include "MovieType.h"
#include <iostream>
#include <string>
using namespace std;


MovieType::MovieType(string title, int year, int receipts, string studio, string stars)
:m_title(name), m_year(age), m_receipts(id), m_studio(studio), m_stars(stars)
{}

MovieType::MovieType()
:m_title(""), m_year(-1), m_receipts(-1), m_studio(""), m_stars("")
{}

void MovieType::Initialize(string title, int year, int receipts, string studio, string stars)	// setAll
{
	m_title = title;
	m_year = year;
	m_receipts = receipts;
	m_studio = studio;
	m_stars = stars;
}


void MovieType::print(ostream& os) const
{
	os << "Title: " << m_title << endl; 
	os << "Studio : " << m_studio << endl;
	os << "Year : " << m_year << endl;
	os << "Adjusted Gross  : " << m_receipts << endl;
	os << "Stars:  " << m_stars << endl;
}

ostream& operator<<(ostream& os, const MovieType& p)
{
	p.print(os);
	return os;
}

int MovieType::compareKeys(const MovieType& p2) const  // result = p1.compareKeys(p2);
{
	return m_title - p2.m_title;	// three way comparison ==, > , <
}
// p1.compareKeys(p2) == 0 --> p1 == p2
// p1.compareKeys(p2) > 0  --> p1 > p2
// p1.compareKeys(p2) < 0  --> p1 < p2

// p1.operator==(p2)  <-->  p1 == p2
bool MovieType::operator==(const MovieType& p2) const  // op == is a member function
{
	return m_title == p2.m_title;
}

int MovieType::getKey() const
{
	return m_title;
}

void MovieType::setKey(int key)
{
	m_title = key;
}

