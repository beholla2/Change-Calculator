// Written by Brandon Holland
// Simple program to calculate the correct change to be given

#include <iostream>

int main()
{
	double input;
	int twenty = 0;
	int ten = 0;
	int five = 0;
	int one = 0;
	int quarter = 0;
	int dime = 0;
	int nickel = 0;
	int penny = 0;

	cout << "Enter the amount of change!" << endl;

	cin >> input;

	input = input + 0.005;

	while(input >= 20)
	{
		twenty++;
		input -= 20;
	}

	while(input >= 10)
	{
		ten++;
		input -= 10;
	}

	while(input >= 5)
	{
		five++;
		input -= 5;
	}

	while(input >= 1)
	{
		one++;
		input -= 1;
	}

	while(input >= .25)
	{
		quarter++;
		input -= .25;
	}

	while(input >= .10)
	{
		dime++;
		input -= .10;
	}

	while(input >= .05)
	{
		nickel++;
		input -= .05;
	}

	while(input >= 0.01)
	{
		penny++;
		input -= 0.01;
	}

	cout << "The correct change should be given by the following" << endl;
	cout << "Twenties: " << twenty << endl;
	cout << "Tens: " << ten << endl;
	cout << "Fives: " << five << endl;
	cout << "Ones: " << one << endl;
	cout << "Quarter: " << quarter << endl;
	cout << "Dimes: " << dime << endl;
	cout << "Nickels: " << nickel << endl;
	cout << "Pennies: " << penny << endl;

	return 0;
}