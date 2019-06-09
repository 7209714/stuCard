#include <iostream>
#include <fstream>
#include <string>
#include "StuCard.h"
#include <iomanip>
using namespace std;

void display(StuCard & v)
{
	cout << fixed<<setprecision(1)<<v.getName() << " " << v.getSex() << " " << v.getScore(0) << " " << v.getScore(1) << " " << v.getScore(2) << endl;
}
int main()
{
	ofstream output("scores.txt");

	StuCard s1("Jerry", 1, 80.0, 70.0, 90.0 );
	StuCard s2("John", 1, 85.0, 77.0, 95.0 );
	StuCard s3("Mary", 0, 83.0, 75.0, 70.0 );
	StuCard s4("Tom", 1, 73.0, 95.0, 67.0);
	StuCard s5("Claire", 0, 88.0, 79.0, 71.0);
	s1.writeToFile(output);
	s2.writeToFile(output);
	s3.writeToFile(output);
	s4.writeToFile(output);
	s5.writeToFile(output);

	output.close();

	ifstream input("scores.txt");

	s1.readFromFile(input);
	cout << endl;
	s2.readFromFile(input);
	cout << endl;
	s3.readFromFile(input);
	cout << endl;
	s4.readFromFile(input);
	cout << endl;
	s5.readFromFile(input);
	cout << endl;

	/*output << "Jerry" << 1 << 80.0 << 70.0 << 90.0 << endl;
	output << "John" << 1 << 85.0 << 77.0 << 95.0 << endl;
	output << "Mary" << 0 << 83.0 << 75.0 << 70.0 << endl;
	output << "Tom" << 1 << 73.0 << 95.0 << 67.0 << endl;
	output << "Claire" << 0 << 88.0 << 79.0 << 71.0 << endl;*/


	input.close();
	/*display(s1);
	display(s2);
	display(s3);
	display(s4);
	display(s5);*/

	s1.printCard();
	s2.printCard();
	s3.printCard();
	s4.printCard();
	s5.printCard();
	system("pause");
	return 0;
}

