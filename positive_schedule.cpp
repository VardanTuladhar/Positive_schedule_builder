#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

class Student
{
	public:
		string name;
		string date;
	Student(string x, string y)
	{
		name = x;
		date = y;

	}
};

int main()
{
time_t t =  time(0);
tm *now  =  localtime(&t);
string todays_year = to_string(now->tm_year + 1900);
string todays_month = to_string(now -> tm_mon +1);
string todays_day = to_string( now-> tm_mday);
string todays_date;
todays_date.append(todays_month);
todays_date.append("-");
todays_date.append(todays_day);
todays_date.append("-");
todays_date.append(todays_year);
todays_date.append(".txt");
ofstream schedule(todays_date);
schedule.close();
cout << "Hi whats your name"<< endl;
string students_name;
cin >> students_name;
if(!todays_date.empty())
{
	todays_date.resize(todays_date.size() - 4);
}

Student student1(students_name, todays_date);

cout << "This student is " << student1.name << endl;

cout << "The days date is " << student1.date << endl; 

}
