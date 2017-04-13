#include <iostream>

using namespace std;

void getInput()
{
	ifstream myStream;
	myStream.open("input.txt");
	
	int totalSum;
	int inputVariable;
	
	while(myStream.good())
	{
		myStream>>inputVariable;
		
		if (inputVariable>-100 && inputVariable<100)
		{
			totalSum+=squareInput(inputVariable);
		}
		else
		{
			//Throw exception.
		}
	}
	
}

int squareInput(int input)
{
	return input*=input;
}


int main(int argc, char** argv)
{
	//Should catch an overflow error here.
}
