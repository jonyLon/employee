#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Date
{
	Date(const size_t& day, const size_t& month, const size_t& year) : day{ day }, month{ month }, year{ year } {}
	size_t day;
	size_t month;
	size_t year;
	string line  = (day < 10 ? "0" + to_string(day) : to_string(day)) + "." +(month < 10 ? "0" + to_string(month) : to_string(month)) + "." + to_string(year);
	
};

class Employee
{
public:

	Employee() = default;
	Employee(string name, const size_t& day, const size_t& month, const size_t& year) :name{ name }, date(day, month, year) {
		this->number = ++last_number;
	}
	~Employee() {}
	void print() const {
		cout << number << ") Name: " << name << "\tHiring date: ";
		cout << date.line <<"\t";
	}

private:
	static size_t last_number;
	string name;
	size_t number;
	Date date;
};

size_t Employee::last_number = 0;