#include <iostream>

using namespace std;

//Going to define an exception class.

class invalidInt
{
	
};

class overflowException
{
	
};


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
			
			//Because an overflow makes the integer negative all I have to do is do a simple test to see if the integer is negative.
			//Testing for negativitiy
			if (totalSum<0)
			{
				//Throw  overflow exception. 
			}
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
