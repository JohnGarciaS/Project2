#pragma once
#include <iostream>
#include <iomanip> 
using namespace std;


class Employee
{
protected:
	double salary;
	double hours;

public:
	virtual double getSalary() = 0;

	virtual double getHealth() = 0;

	virtual double getVacation() = 0;

};