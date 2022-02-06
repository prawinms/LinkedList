#include "LinkedList_C.h"
#include "iostream"

LinkedList_C::LinkedList_C(int data)
{
	Node *dataNode = new Node();
	dataNode->data = data;
	dataNode->next = nullptr;
	headNode = dataNode;
	currentNode = dataNode;
	size++;
}

void LinkedList_C::Append(int data)
{
	Node* dataNode = new Node();
	currentNode->next = dataNode;
	dataNode->data = data;
	dataNode->next = nullptr;
	currentNode = dataNode;
	size++;
}

void LinkedList_C::Insert(int data, int position)
{
	//check the position limit with current size of linked list
	if (position <= size)
	{
		Node* dataNode = new Node();
		dataNode->data = data;
		if (position == 1)
		{
			dataNode->next = headNode;
			headNode = dataNode;
		}
		else 
		{
			Node* nodePointer = headNode;
			for (int index = 1; index < position; index++)
			{
				nodePointer = nodePointer->next;
			}
			// replace nex pointer with nodePointer
			dataNode->next = nodePointer->next;
			// rplace nodePointer next with now node
			nodePointer->next = dataNode;
		}
		size++;
	}
	else
	{
		std::cout << "incorrect position in " << __FUNCTION__ << "\n";
	}
}

void LinkedList_C::Modify(int data, int position)
{
	if (position > size)
	{
		std::cout << "incorrect position in "<< __FUNCTION__ << "\n";
		return;
	}

	Node* nodePointer = headNode;
	for (int index = 1; index < position; index++)
	{
		nodePointer = nodePointer->next;
	}
	nodePointer->data = data;
}

void LinkedList_C::Remove(int position)
{
	if (position > size)
	{
		std::cout << "incorrect position in " << __FUNCTION__ << "\n";
		return;
	}

	Node* nodePointer = headNode;
	Node* nodePointerPrevious = headNode;
	for (int index = 1; index < position; index++)
	{
		nodePointerPrevious = nodePointer;
		nodePointer = nodePointer->next;
	}
	nodePointerPrevious->next = nodePointer->next;
	size--;
}

void LinkedList_C::Print()
{
	Node* nodePointer = headNode;
	for (int index = 1; index <= size; index++)
	{
		std::cout << nodePointer->data << " ";
		nodePointer = nodePointer->next;
	}
	std::cout << "\nend\n";
}

