// makeV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double changedue;
	double amount;
	double cost;
	int x;
	int dollars;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	cout << "Please enter the Cost of the item: " << endl;
	cin >> cost;
	cout << "Please enter the amount paid: " << endl;
	cin >> amount;

	while (amount<cost)
	{

		cout << "that is not enough you need " << (cost = cost - amount) << " more" << endl;
		cin >> amount;
		cout << "Please enter additional amount : " << (cost = cost - amount) << endl;
		cin >> amount;
		if (amount >= cost)

			break;

	}
	while (amount>cost)
	{
		changedue = amount - cost;
		cout << "Item Price: " << cost << endl;
		cout << "amount Paid: " << amount << endl;
		cout << "change due: " << changedue << endl;
		if ((amount >= 1) && (amount >= 0))
		{
			x = changedue * 100;
			dollars = x / 100;
			x = x % 100;
			cout << "Dollars: " << dollars << endl;

			quarters = x / 25;
			x = x % 25;
			cout << "Quarters: " << quarters << endl;

			dimes = x / 10;
			x = x % 10;
			cout << "Dimes: " << dimes << endl;

			nickels = x / 5;
			x = x % 5;
			cout << "Nickles: " << nickels << endl;

			pennies = x / 1;
			x = pennies;
			cout << "Pennies: " << pennies << endl;
		}
		else
		{
			cout << "Next item" << endl;

		}
		if (cost != 0)
		{
			cout << "Please enter the cost of the Item (enter 0 to exit) : " << endl;
			cin >> cost;
			break;
		}
	}
	return 0;
}

