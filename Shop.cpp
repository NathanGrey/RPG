#include "Shop.h"
#include "Inventory.h"
#include <iostream>
#include <iomanip>
using namespace std;

int Shop::Storefront()
{
	cout << "---?-----------------------------------------" << endl;
	cout << "\tHere's what I'm selling." << endl;
	cout << "---------------------------------------------" << endl;

	cout << "--------------------------------------------------------------------------" << endl;
	cout << "|     Basic Shop              |   #    |  Item             |  Price      |" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "|                             |        |                   |             |" << endl;
	cout << "|                             |  1.    |  Apple Juice      |  20G        |" << endl;
	cout << "|                             |        |                   |             |" << endl;
	cout << "|     Pick a number to        |  2.    |  Orange Juice     |  50G        |" << endl;
	cout << "|                             |        |                   |             |" << endl;
	cout << "|     buy an item.            |  3.    |  Disco Ball       |  80G        |" << endl;
	cout << "|                             |        |                   |             |" << endl;
	cout << "|                             |  4.    |  ???              |  10000G     |" << endl;
	cout << "|                             |        |                   |             |" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "                                                           ---------------" << endl;
	cout << "                                                           |   5. Exit   |" << endl;
	cout << "                                                           ---------------" << endl;
	cout << "---INFO-----------------------------------------------------------------" << endl << endl;
	cout << "\tYou have " << m_Gold << "G." << endl << endl;
	cout << "------------------------------------------------------------------------" << endl;
	//Inventory InventoryObject;

	cin >> m_ShopChoice;
	switch (m_ShopChoice)
	{
	case 1: {

		cout << "---INFO-----------------------------------------------------------------" << endl << endl << endl;

		cout << "You bought the Apple Juice!" << endl << endl << endl;

		cout << "------------------------------------------------------------------------" << endl << endl;


	}
			//system("pause");
			break;

	case 2: {

		cout << "---INFO-----------------------------------------------------------------" << endl << endl << endl;

		cout << "You bought the Orange Juice!" << endl << endl << endl;

		cout << "------------------------------------------------------------------------" << endl << endl;

	}
			// system("pause");
			break;

	case 3: {
		cout << "---INFO-----------------------------------------------------------------" << endl << endl << endl;

		cout << "You bought the Disco Ball!" << endl << endl << endl;

		cout << "------------------------------------------------------------------------" << endl << endl;
	}
			// system("pause");
			break;

	case 4: {
		cout << "---INFO-----------------------------------------------------------------" << endl << endl << endl;

		cout << "You bought the Special Item!!!!!!!" << endl << endl << endl;

		cout << "------------------------------------------------------------------------" << endl << endl;
	}
			//system("pause");
			break;

	case 5: {
		cout << "---INFO-----------------------------------------------------------------" << endl << endl << endl;

		cout << "Thanks for stopping by!" << endl << endl << endl;

		cout << "------------------------------------------------------------------------" << endl << endl;
	}
			//system("pause");
			break;

	default:

		cout << "---?-----------------------------------------" << endl;

		cout << "\tThis is a bug of some sort!" << endl;

		cout << "---------------------------------------------" << endl;

		// system("pause");
		break;
	}
	return 0;
}
