#include "Employee.h"
#include "Nonprofessional.h"
#include <iostream>
using namespace std;

NonPro::NonPro(double s, double h)
{
	salary = s;
	hours = h; 
}

double NonPro::getSalary()
{
	/*Nonprofessionals wage is just the amount they make times how much they work
	for weekly pay*/
	double weekly = 0;
	weekly = salary * hours;
	return weekly;
}

double NonPro::getHealth()
{

	//Refer to getHealthy of Professional
	double health = 0;
	double weekly = getSalary() * 52;
	if (salary > 100000)
	{
		
		health = weekly * 0.09;
	}
	else
	{
		
		health = weekly * 0.05;
	}
	return health;

	

}

double NonPro::getVacation()
{

	/*Using hours worked you get back .16 back for PTO(paid time off) and 
	using this you can multiply with hours to get PTO*/
	double maxPTO = 80;

	double VacHours = 0;

	VacHours = hours * .16;

	if (VacHours >= 80)
	{
		return maxPTO;
	}

	else
	{
		return VacHours;
	}

}

void NonPro::printPro()
{
	cout << fixed << setprecision(2) << "This persons Weekly Salary is: $" << getSalary() << endl;
	cout << fixed << setprecision(2) << "This persons Weekly healht contribution is: $" << getHealth() << endl;
	cout << "The vacation hours eanred this week are: " << getVacation() << " hours" << endl;

		
}