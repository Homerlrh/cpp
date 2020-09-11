#ifndef A_H_
#define A_H_

#pragma once
#include "Node.cpp"
#include "Node.h"

template<class ItemType>
class a
{
private:
	Node<ItemType> *start;
public:
	a();
	virtual ~a();
	int getlength();
	void append(ItemType item);
	bool search(ItemType item);
	void display();
};

#endif // A_H_