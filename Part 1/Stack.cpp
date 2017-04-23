#include <iostream>
#include "Stack.h"
#include <list>

using namespace std;

Stack::Stack()
{
	list<int> myList();
}

Stack::~Stack()
{
	delete &myList;
}

void Stack::push(int number)
{
	myList.push_back(number);
}

void Stack::pop()
{
	myList.pop_front();
}

int Stack::top()
{
	myList.front();
}

bool Stack::empty()
{
	return (myList.size()==0);
}
