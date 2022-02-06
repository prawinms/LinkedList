#pragma once

class LinkedList_C
{
private:
	struct Node
	{
		int data;
		Node* next;
	};

	Node *headNode = nullptr;
	Node* currentNode = nullptr;
	int size = 0;

public:
	LinkedList_C(int data);

	//append data to linked list
	void Append(int data);
	//inser data into linked list at given position
	void Insert(int data, int position);
	//modify data of linked list at given position
	void Modify(int data, int position);
	//remove data from linked list at given position
	void Remove(int position);
	// print all data from linked list
	void Print();
};