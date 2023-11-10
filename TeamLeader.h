#pragma once
#include "ProductionWorker.h"
class TeamLeader : public ProductionWorker
{
public:
	TeamLeader(string name, const size_t& day, const size_t& month, const size_t& year, Shift shift, size_t hourlyRate, size_t monthlyBonus, size_t salary, size_t attendedTrainingHours)
		:ProductionWorker(name, day, month, year, shift, hourlyRate), monthlyBonus(monthlyBonus), salary{ salary }, attendedTrainingHours(attendedTrainingHours) {
		if (requiredTrainingHours <= attendedTrainingHours) {
			this->salary += monthlyBonus;
		}
	}
	~TeamLeader() {}


	double getMonthlyBonus() const {
		return monthlyBonus;
	}
	size_t getRequiredTrainingHours() const {
		return requiredTrainingHours;
	}
	size_t getAttendedTrainingHours() const {
		return attendedTrainingHours;
	}
	size_t getSalary() const {
		return salary;
	}

	void setMonthlyBonus(double newMonthlyBonus) {
		monthlyBonus = newMonthlyBonus;
	}
	void setRequiredTrainingHours(size_t newRequiredTrainingHours) {
		requiredTrainingHours = newRequiredTrainingHours;
		if (requiredTrainingHours <= attendedTrainingHours) {
			salary += monthlyBonus;
		}
	}
	void setAttendedTrainingHours(size_t newAttendedTrainingHours) {
		attendedTrainingHours = newAttendedTrainingHours;
		if (requiredTrainingHours <= attendedTrainingHours) {
			salary += monthlyBonus;
		}
	}

	void print() {
		ProductionWorker::print();
		cout << "\tAttended training hours: " << getAttendedTrainingHours() << "\tRequired training hours: " << getRequiredTrainingHours();
		cout << "\tMonthly bonus: " << getMonthlyBonus() << "\tSalary: " << getSalary();
	}

private:
	size_t monthlyBonus;
	size_t requiredTrainingHours = 20;
	size_t attendedTrainingHours;
	size_t salary;
};


