import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class main 
{
	public static void main(String[] args) 
	{		
		//I'm going to get my user input from a file. Rather than the keyboard.
		
		int sum=0;
		
		try
		{
			Scanner getInput=new Scanner(new File("C:\\Users\\Owner\\Documents\\CSCI 372\\Assignment 4\\CSCI372Assignment4\\Part 3\\src\\trial.txt")); //Will have to change this
			
			while(getInput.hasNextLine())
			{
				try
				{
					String stringInput=getInput.nextLine();
					int intInput=new Integer(stringInput).intValue();
					
					if (intInput>100 || intInput<-100)
					{
						throw new invalidIntException();
					}
					
					//Now do our summing
					int oldSum=sum;
					sum+=intInput*intInput;
					
					//Now do further checks for overflow
					if (oldSum>sum) //This would only happen if there is an overflow
					{
						throw new overflowException();
					}
					
				}
				catch (NumberFormatException nf)
				{
					System.out.println("The integer wasn't able to be parsed, it will be skipped.");
					continue;
				} 
				catch (invalidIntException e) 
				{
					e.getMessage();
					System.out.println("The integer was out of the valid input range, it will be skipped.");
					continue;
				} 
				catch (overflowException e)
				{
					e.getMessage();
					System.out.println("The program will now exit.");
					System.exit(0);
				}
			}
		}
		catch (FileNotFoundException fnfe)
		{
			System.out.println("The file wasn't found.");
			System.exit(0);
		}
		
	
		System.out.println("The sum is "+sum);
	}
}
