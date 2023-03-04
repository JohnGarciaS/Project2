#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class Professional : public Employee
{
public:
	Professional(double s, double vaction);

	double getSalary();

	double getHealth();

	double getVacation();

	void printPro();



};
