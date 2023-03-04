#pragma once

//Create the Nodes that are going to be needed for linked list
template<typename Item_Type>
struct Node
{
	Item_Type data;
	Node<Item_Type>* next;
	int num_items;
};



template<typename Item_Type>
class Linked_List
{
private:
	Node<Item_Type>* head;
	Node<Item_Type>* tail;
	int num_items;

public:
	Linked_List();
	void push_front(Item_Type value);
	void push_back(Item_Type value);
	void pop_front();
	void pop_back();
	void front();
	void back();
	bool empty();
	void printList();
	void insert(size_t index, const Item_Type& item);
	bool remove(size_t index);
	int size_list();
	size_t find(const Item_Type& item);




};