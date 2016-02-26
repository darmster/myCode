#include <string>
std::ifstream inf("data.txt");
string name;
while(!std::getline(inf, name, '|').eof())
{
  Athlete* ap;
  std::string jersey_number;
  std::string best_time;
  std::string sport;
  string high_school;
  std::getline(inf, jersey_number, '|'); #read thru pipe
  std::getline(inf, best_time);          #read thru newline
  std::getline(inf, sport, '|');         #read thru pipe
  std::getline(inf, high_school);        #read thru newline
  ap = new Athlete(name, strtod(number.c_str()), 
       strtof(best_time.c_str()), sport, high_school);
  //do something with ap

}
