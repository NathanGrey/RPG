/*#include "Inventory.h"
#include "Player.h"
#include "Shop.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

vector<string> Inventory; // Makes the inventory a global variable

void Inventory::PrintInventory()
{
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "\tBag Contents:";

	if (Inventory.empty())

	{
		cout << " no items.";
		cout << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

	}

	else

	{
		for (int i = 0; i < Inventory.size(); ++i)
		{
			cout << " " << Inventory.at(i) << ","; // Prints the inventory size


		}
		cout << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
	}

}

inline void Inventory::EmptyInventory() {
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "\tYou emptied your bag." << endl << endl << endl;
	Inventory.clear(); // Empties the bag
	cout << "------------------------------------------------------------------------" << endl << endl;
}

inline void Inventory::InsertItem(int Slot0, string name) {
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "\tThe " << name << " was found in your bag." << endl << endl << endl;
	Inventory.insert(Inventory.begin() + Slot0, name); // Adds item to selected slot
	cout << "------------------------------------------------------------------------" << endl << endl;
}

inline void Inventory::ReplaceItem(int Slot, string ReplacementItem) {
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "\tYou replaced the " << Inventory.at(Slot) << " with " << ReplacementItem << "." << endl << endl << endl;
	Inventory.at(Slot) = ReplacementItem; // Replaces item with other
	cout << "------------------------------------------------------------------------" << endl << endl;
}

inline void Inventory::NumberOfItems() {
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "\tBag contents: " << Inventory.size() << " items." << endl << endl << endl;// Prints number of items on hand
	cout << "------------------------------------------------------------------------" << endl << endl;
}

inline void Inventory::AddItem(string name) {
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "\tYou obtained the " << name << "." << endl << endl << endl;
	Inventory.push_back(name); // Adds an item to the end of the inteventory
	cout << "------------------------------------------------------------------------" << endl << endl;
}

inline void Inventory::DeleteItem(int Slot) {
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "\tYou threw away the " << Inventory.at(Slot) << "." << endl << endl << endl;
	Inventory.erase(Inventory.begin() + Slot); // Deletes a specific item from inventory
	cout << "------------------------------------------------------------------------" << endl << endl;
}



int Inventory::Bag(int InventorySlotNumber, char *InventorySlotCharacter[])
{


	/*AddItem("Apple Juice"); // Adds item at slot 0
	getchar();
	cout << endl;

	AddItem("Orange Juice"); // Adds item at slot 1
	getchar();
	cout << endl;

	AddItem("Heal Item"); // Adds item at slot 2
	getchar();
	cout << endl;

	NumberOfItems(); // Prints the number of items
	getchar();
	cout << endl;

	PrintInventory();
	getchar();
	cout << endl;

	DeleteItem(1); // Deletes  the first item
	getchar();
	cout << endl;

	ReplaceItem(1, "Special Item");
	getchar();
	cout << endl;

	PrintInventory();
	getchar();
	cout << endl;

	AddItem("Disco Ball");
	getchar();
	cout << endl;

	PrintInventory();
	getchar();
	cout << endl;

	EmptyInventory();
	getchar();
	cout << endl;

	NumberOfItems();
	getchar();
	cout << endl;

	PrintInventory();
	getchar();
	cout << endl;*/

//	return 0;
//}
