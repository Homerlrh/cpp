#include <cstddef>
#include "a.h"

template<class ItemType>
a<ItemType>::a()
{
	start = NULL;
}

template<class ItemType>
a<ItemType>::~a()
{
}


template<class ItemType>
int a<ItemType>::getlength()
{
	Node<ItemType> *temp = start;
	int length = 0;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}

	return length;
}

template<class ItemType>
void a<ItemType>::append(ItemType item)
{
	Node<ItemType> *newNode = new Node<ItemType>;
	newNode->item = item;
	newNode->next = NULL;
	if (start == NULL)
	{
		start = newNode;
	}
	else
	{
		Node<ItemType> *temp = start;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

template<class ItemType>
bool a<ItemType>::search(ItemType item)
{
	Node<ItemType> *temp = start;
	while (temp != NULL)
	{
		if (temp->item == item)
			return true;
		temp = temp->next;
	}
	return false;
}

template<class ItemType>
void a<ItemType>::display()
{
	if (start == NULL)

		return;

	Node<ItemType> *temp = start;

	while (temp != NULL)

	{

		cout << temp->item << "\t";

		temp = temp->next;

	}
}
