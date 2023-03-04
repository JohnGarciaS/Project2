#pragma once
#include "Employee.h"
#include <iostream>
#include "Professional.h"
#include <iomanip> 
using namespace std;


class NonPro :public Employee
{
public:
	NonPro(double s, double h);

	double getSalary();

	double getHealth();

	double getVacation();

	void printPro();
};