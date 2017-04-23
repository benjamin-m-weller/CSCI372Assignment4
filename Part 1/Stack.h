#include <iostream>
#include <list>

using namespace std;

class Stack
{
	private:
		list<int> myList();
	public:
		Stack();
		~Stack();
		void push(int);
		void pop();
		int top();
		bool empty();
};
