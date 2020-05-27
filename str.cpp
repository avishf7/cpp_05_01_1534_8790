/*
File: str.cpp
Description:
Course: 150018 C++ Workshop, Exercise 4, Question 3
Author: Dan Zilberstein
Students: eli iluz 311201354
		& avishay farkash 205918790
*/
#include <iostream>
#include <string>


using namespace std;

int main() {

	string str;

	cout << "Enter 4 strings with space between them:" << endl;

	getline(cin, str);

	while(str.find(" ") != -1)
		str.replace(str.find(" "), 1, "*");

	cout << str << endl;

	str.replace(str.find_last_of("*") + 1, str.size() - 1 - str.find_last_of("*"), "#!!@1234");
	cout << str << endl;

	while (str.find("*") != -1)
	{
		str = str.substr(str.find("*") + 1, str.size() - str.find("*") - 1);
		cout << str << endl;
	}

	str.clear();
	cout << str << endl;

	return 0;
}