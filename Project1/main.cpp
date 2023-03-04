#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"
#include <iomanip> 
using namespace std;



int main()
{
	
	Linked_List<int> list;
	list.push_back(9999);
	list.push_front(1111);
	list.push_back(193);
	list.push_back(48);
	list.push_back(50);
	list.push_front(42);

	cout << endl;
	list.printList();
	cout << endl;

	list.insert(4, 99);
	list.front();
	list.back();
	


	cout << "The size of the list is " << list.size_list() << endl;
	cout << endl;

	bool ans = list.remove(1);
	if (ans == true)
	{
		cout << "Item was removed " << endl << endl;
	}
	else if (ans == false)
	{
		cout << "Item was not removed " << endl << endl;
	}
	list.printList();

	cout << endl;

	if (list.find(48) == list.size_list())
	{
		cout << "Item not found, size is " << list.find(48);
	}

	else
	{
		cout << "Item is at " << list.find(48) << endl;
	}
	

	cout << endl;
	cout << "-------------------------------------------------" << endl;

	Professional person1(50000, 40);
	person1.printPro();


	NonPro person2(18.90, 40);
	person2.printPro();


	
	
}

