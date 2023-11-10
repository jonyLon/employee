#pragma once
#include "Employee.h"
using namespace std;
enum Shift
{
	DAY = 1, NIGHT = 2
};
class ProductionWorker: public Employee
{
public:

	ProductionWorker(string name, const size_t& day, const size_t& month, const size_t& year, Shift shift, size_t hourlyRate) : Employee(name, day, month, year), shift(shift), hourlyRate(hourlyRate) {}
	~ProductionWorker(){}

	Shift getShift() const { return shift; }
	double getHourlyRate() const { return hourlyRate; }

	void setShift(Shift newShift) { shift = newShift; }
	void setHourlyRate(double newHourlyRate) { hourlyRate = newHourlyRate; }
	void print(){
		Employee::print();
		cout << "\tShift: " << getShift() << "\tHourly Rate: " << getHourlyRate();
	}
private:
	Shift shift;
	size_t hourlyRate;
};

