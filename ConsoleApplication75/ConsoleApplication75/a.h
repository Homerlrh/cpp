#ifndef A_H_
#define A_H_

#include "Node.cpp"

template<class ItemType>
class a
{
private:
	Node<ItemType> *start;
public:
	a();
	~a();
	int getlength();
	void append(ItemType item);
	bool search(ItemType item);
	void display();
};

#endif // A_H_