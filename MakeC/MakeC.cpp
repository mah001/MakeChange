// makeV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const double USD = 1.00;
	const double QTR = 0.25;
	const double DM = 0.10;
	const double NI = 0.05;
	double itemCost;
	double amtPaid;
	double x;



	cout << "Please enter the Cost of the item: " << endl;
	cin >> itemCost;

	cout << "Please enter the amount paid: " << endl;
	cin >> amtPaid;
	if ((itemCost > 0) && (itemCost == amtPaid))

	{
		cout << "next item;" << endl;
	}

	else if (itemCost <= amtPaid)

	{
		x = amtPaid - itemCost;
		cout << " Item Price: " << "$" << itemCost << endl;
		cout << "Amount Paid: " << "$" << amtPaid << endl;
		cout << "change Due: " << "$" << x << endl;
		cout << "Quarter(s) " << x / QTR << endl;
		cout << "Dime(s) " << x / DM << endl;
		cout << "Nickle(s) " << x / NI << endl;

	}
	else
	{
		while (itemCost != amtPaid)
		{
			cout << "That is not enough! you need: " << "$" << (itemCost = itemCost - amtPaid) << " more!" << endl;
			cin >> amtPaid;
		}

	}
	cout << "press 0 to exit: " << endl;
	cin >> x;
	while (x != 0)
	{
		cout << x << endl;
	}




	return 0;
}


