#pragma once
#include <iostream>

using namespace std;

//friend - разрешает обращение к переменным в привате
class Date
{
	int day;
	int month;
	int year;
public:
	Date(int d, int m, int y) : day{ d }, month{ m }, year{ y }{}

	//Перегрузка операторов
	friend ostream& operator<< (ostream& output, Date& d) {
		output << "day: " << d.day << " month: " << d.month << " year: " << d.year << endl;
		return output;
	}
	friend istream& operator>> (istream& input, Date& d) {
		input >> d.day;
		input >> d.month;
		input >> d.year;
		return input;
	}
};

