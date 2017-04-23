#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
	stackPtr=new int[100];
	maxLen=99;
	topSub=-1;
}

Stack::~Stack()
{
	delete [] stackPtr;
}

void Stack::push(int number)
{
	if (topSub==maxLen)
	{
		cerr<<"Error in push--stack is full.\n";
	}
	else
	{
		stackPtr[++topSub]=number;
	}
}

void Stack::pop()
{
	if (topSub==-1)
	{
		cerr<<"Error in pop--stack is empty.\n";
	}
	else
	{
		topSub--;
	}
}

int Stack::top()
{
	if (topSub==-1)
	{
		cerr<<"Error in top--stack is empty.\n";
	}
	else
	{
		return (stackPtr[topSub]);
	}
}

int Stack::empty()
{
	return (topSub==-1);
}
