#include "LinkedList.h"
#include <iostream>
#include <stdexcept>

using namespace std;



template<typename Item_Type>
Linked_List<Item_Type>::Linked_List()
{
	head = NULL;
	tail = NULL;
	int num_items = 0;
}

template<typename Item_Type>
void Linked_List<Item_Type>::push_front(Item_Type value)
{
	/*Check whether it's empty the just add to the beginning*/
	if (head != NULL)
	{
		Node<Item_Type>* temp = new Node<Item_Type>;
		temp->data = value;
		temp->next = head;
		head = temp;
		num_items++;
	}
	else
	{
		cout << "EMPTY";
	}
}

template<typename Item_Type>
void Linked_List<Item_Type>::push_back(Item_Type value)
{
	Node<Item_Type>* temp = new Node<Item_Type>;
	temp->data = value;
	temp->next = NULL;

	//If the head is empty this will just make the tail and head the same at the beginng 
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		num_items++;
	}

	else
	{
		tail->next = temp;
		tail = tail->next;
		num_items++;
	}
}

template<typename Item_Type>
void Linked_List<Item_Type>::pop_front()
{
	if (head != NULL)
	{
		Node<Item_Type>* temp = head;
		head = head->next;
		delete temp;
		num_items--;
	}

	else
	{
	cout << "EMPTY";
	}
}


template<typename Item_Type>
void Linked_List<Item_Type>::pop_back()
{
	if (head != NULL)
	{
		if (head->next == NULL)
		{
			head = NULL;
		}

		else
		{
			Node<Item_Type>* temp = head;
			while (temp->next->next != NULL)
			{
				temp = temp->next;
			}

			Node<Item_Type>* tailNode = temp->next;
			temp->next = NULL;
			delete(tailNode);
			num_items--;
		}
	}
}

template<typename Item_Type>
void Linked_List<Item_Type>::front()
{
	if (head != NULL)
	{
		cout << head->data << " Is the Front Value" << endl;

	}

	else
	{
		cout << "There is nothing at the front, list is empty." << endl;
	}
}


template<typename Item_Type>
void Linked_List<Item_Type>::back()
{
	if (head == NULL)
	{
		cout << "There is nothing at the back, list is empty." << endl;
	}

	else
	{
		cout << tail->data << " Is the Back Value" << endl;
	}
}


template<typename Item_Type>
bool Linked_List<Item_Type>::empty()
{
	if (head == NULL)
	{
		return true;
	}

	else
		return false;
}


template<typename Item_Type>
int Linked_List<Item_Type>::size_list()
{
	Node<Item_Type>* temp = new Node<Item_Type>;
	temp = head;
	int size = 0;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}

	return size;
}




template<typename Item_Type>
void Linked_List<Item_Type>::printList()
{
	Node<Item_Type>* temp = head;
	if (temp != NULL)
	{
		cout << "The List is: ";
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	else
	{
		cout << "There is nothing in the list." << endl;
	}
}


template<typename Item_Type>
void Linked_List<Item_Type>::insert(size_t index, const Item_Type& item)
{
	Node<Item_Type>* newNode = new Node<Item_Type>;
	newNode->data = item;
	newNode->next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	else if (index == 0)
	{
		newNode->next = head;
		head = newNode;
		return;
	}

	Node<Item_Type>* curr = head;
	int count = 0;
	while (curr->next != nullptr && count < index - 1)
	{
		curr = curr->next;
		count++;
	}

	newNode->next = curr->next;
	curr->next = newNode;


}

template<typename Item_Type>
bool Linked_List<Item_Type>::remove(size_t index)
{
	if (head == NULL)
	{
		return false;
	}

	Node<Item_Type>* curr = head;
	Node<Item_Type>* prev = NULL;
	int count = 0;
	
	while (curr != nullptr && count < index)
	{
		prev = curr;
		curr = curr->next;
		count++;
	}

	if (curr == nullptr)
	{
		return false;
	}

	if (prev == nullptr)
	{
		head = curr->next;
	}

	else
	{
		prev->next = curr->next;
	}

	delete curr;
	return true;
}


template<typename Item_Type>
size_t Linked_List<Item_Type>::find(const Item_Type& item)
{
	int index = 0;

	Node<Item_Type>* curr = head;
	while (curr != NULL)
	{
		if (curr->data == item)
			return index;

		curr = curr->next;
		index++;
	}

	
		return index;

}