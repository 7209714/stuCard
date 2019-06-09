#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include<fstream>

using namespace std;
class StuCard
{
public:
	StuCard(string, bool, double, double, double);
	void setName(string);
	void setSex(bool);
	void setScore(int, double);
	string getName();
	bool getSex();
	double getScore(int);
	double average();
	int getAge(int);
	void printCard();
	void readFromFile(istream&);
	void writeToFile(ostream&);
private:
	string name;
	bool sex;
	double scoreAry[3];
};
#endif