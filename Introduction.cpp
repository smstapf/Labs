// Introduction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "ctype.h"

int checkNumber(int number);

int main()
{
	int choice;
	double number;
	printf("Please enter a 1 for multiples or a 2 for powers.");//choose between multiples or powers
	scanf("%d", &choice);

	if (choice != 1 && choice != 2)
	{
		printf("Enter a valid choice.");
		return 0;
	}

	printf("Please enter a number 1-10.");
	scanf("%lf", &number);
	
	if ((checkNumber(number)) == 0)//checks for valid number
	{
		printf("You entered a wrong value. Please try again. Enter a value 1-10");
		scanf("%lf", &number);
	}
	
	if (choice == 1)//multiples function
	{
		int i;
		int count = 1;
		double answer[12];

		for (i = 0; i < 12; i++)
		{
			answer[i] = count *  number;
			count++;
			printf("\n%.0lf", answer[i]);
		}
	}
	if (choice == 2)//powers function
	{
		double answer2[15] = { 1 };
		int a;
		int count2 = 1;
		
		for (a = 1; a < 16; a++)
		{
			answer2[a] = number * answer2[a - 1];
			printf("\n%.0lf", answer2[a]);
		}
	}
    return 0;
}

int checkNumber(int number)
{
	if (isdigit(number) != 0)
	{
		printf("Please enter a valid choice.");
		return 0;
	}
	if (number > 10 || number < 1)
	{
		printf("Please enter a valid number.");
		return 0;
	}
	return 1;
}
//Question and Answers
//There shouldn't be any limitations to what my program can do. I originally used floats, but changed to doubles 
//because the 10^15 is a large number and its hard for a double to store because of maximum amount of numbers.
//I like using visual studio. But I am willing to adapt to anything.
// I have plenty of experience in C. I have some experience in both C++ and Linux. 