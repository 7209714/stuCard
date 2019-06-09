#include "StuCard.h"
#include <iostream>
#include <iomanip>
using namespace std;
StuCard::StuCard(string n, bool s, double a, double b, double c) 
{
	name = n;
	sex = s;
	scoreAry[0] = a;
	scoreAry[1] = b;
	scoreAry[2] = c;
}
void StuCard::setName(string newName)
{
	name = newName;
}
void StuCard::setSex(bool newSex)
{
	sex = newSex;
}
void StuCard::setScore(int i, double newScore)
{
	scoreAry[i] = newScore;
}

string StuCard::getName() 
{
	return name;
}
bool StuCard::getSex()
{
	return sex;
}
double StuCard::getScore(int i)
{
	return scoreAry[i];
}

double StuCard::average() 
{
	double total = 0, average = 0;
	for (int i = 0; i < 3; i++) {
		total += scoreAry[i];
	}
	average = total / 3;
	return average;
}
int StuCard::getAge(int y) 
{
	return 2018 - y;
}
void StuCard::printCard()
{
	cout << fixed << setprecision(1) << name << " " << sex << " " << scoreAry[0] << " " << scoreAry[1] << " " << scoreAry[2] << " ";
}
void StuCard::readFromFile(istream& cin)
{
	cin >> fixed >> setprecision(1) >> name >> sex >> scoreAry[0] >> scoreAry[1] >> scoreAry[2] ;
	
}
void StuCard::writeToFile(ostream& out)
{
	out << fixed << setprecision(1) << name <<" " << sex << " " << scoreAry[0] << " " <<scoreAry[1] << " " <<scoreAry[2]<<endl;


}