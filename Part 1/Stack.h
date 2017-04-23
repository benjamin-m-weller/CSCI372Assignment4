#include <iostream>

class Stack
{
	private:
		int *stackPtr;
		int maxLen;
		int topSub;
	public:
		Stack();
		~Stack();
		void push(int);
		void pop();
		int top();
		int empty();
};
