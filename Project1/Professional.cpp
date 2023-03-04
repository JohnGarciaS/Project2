#include "Employee.h"
#include "Professional.h"
#include <iostream>
#include <iomanip> 
using namespace std;

Professional::Professional(double s, double vacation)
{
	salary = s;
	hours = vacation;

}

double Professional::getSalary()
{
	/* Professionals are paid a yearly salary so this function
	divides that salary by weeks in year to find week salaray*/ 

	double weeklySal = salary / 52;
	return weeklySal;
}

double Professional::getHealth()
{
	/*Average health care contribution is about 9% of monthly income
	using this we can get health care contributions*/
	double health = 0;
	if (salary > 100000)
	{
		
		health = getSalary() * 0.09;
	}
	else
	{
		
		health = getSalary() * 0.05;
	}
	return health;
	
}

double Professional::getVacation()
{
	/*Professional, unlike nomral employees, don't get set time off for work
	they are yearly given a set amount of time off. 
	average salaried time off is 10-14 days*/

	int DaysOff = 10;
	return DaysOff; 
}


void Professional::printPro()
{
	cout << fixed << setprecision(2) << "The weekly salary for this Professional Employee is: $" << getSalary() << endl;
	cout << fixed << setprecision(2) << "The health care contribution for this person a week is: $" << getHealth() << endl;
	cout << "The vaction time for this empoloyee is: " << getVacation() << endl;

}