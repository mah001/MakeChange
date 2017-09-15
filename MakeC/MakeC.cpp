// makeV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double nickles;
	double dimes;
	double quarters;
	double dollars;
	double cost;
	double amount;
	double changedue;

	cout << "cost" << cost << endl;
	cin >> cost;
	cout << "amount" << amount << endl;
	cin >> amount;




	while (amount<cost)
	{
		cout << "that is not enough you need " << (cost = cost - amount) << "more" << endl;
		cin >> amount;
		cout << "Please enter additional amount : " << (cost = cost - amount) << endl;
		cin >> amount;
		if (amount >= cost)

			break;

	}
	while (amount>cost)
	{
		cout << "Item Price: " << cost << endl;
		cout << "amount Paid: " << amount << endl;
		cout << "change due: " << (amount = amount - cost) << endl;
		if (amount >= 1)
		{
			cout << "Dollars " << (dollars = amount - dollars / 100) << endl;
		}
		else if ((amount<1) && (amount>0.25))
		{
			cout << "Quarters " << (quarters = amount - quarters / 25) << endl;

		}
		else if ((amount<0.25) && (amount>0.10))
		{
			cout << "nickles " << (nickles = amount - nickles / 10) << endl;

		}
		else if (amount<0.10)
		{
			cout << "dimes " << (dimes = amount - dimes / 10) << endl;

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
