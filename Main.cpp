// *****************************************************
//
//
//                    HEADER SPACE
//
//
// *****************************************************


#include <windows.h> // Allows Windows OS specific functions
#include "Inventory.h" // Adds inventory class
#include "Shop.h" // Adds Shop class
#include "BattleFunctions.h" // Adds BattleFunctons class
#include "Player.h" // Adds Player class
#include "Enemy.h" // Adds Enemy class
#include "Battle.h" // Adds Battle class
#include <iostream> // Preprocessor
#include <string> // Aloows proper use of strings

using namespace std; // Declaration of namespace


					 // *****************************************************
					 //
					 //
					 //                      MAIN MENU
					 //
					 //
					 // *****************************************************


void PrintMainMenu() // Function to print main menu
{
	cout << "=============================================" << endl;
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	cout << "                  RPG Demo                  " << endl;
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	cout << "=============================================" << endl << endl << endl;
}


// *****************************************************
//
//
//                  PLAYER CHOICE # 1
//
//
// *****************************************************

int PlayerChoiceFunction1() // Function for the Player's first choice
{
	char PlayerChoice1;
	cout << "---CHOICE---------------------------------------------------------------" << endl;

	cout << "\t1. Take me to a battle!" << endl;
	cout << "\t2. I need to buy some items first." << endl;
	cout << "\t3. Tell me more about this game." << endl;

	cout << "------------------------------------------------------------------------" << endl;
	cin >> PlayerChoice1;

	switch (PlayerChoice1)
	{
	case '1': {cout << "---CHOICE---------------------------------------------------------------" << endl;

		cout << "\t* Take me to a battle!" << endl;
		cout << "\t- I need to buy some items first." << endl;
		cout << "\t- Tell me more about this game." << endl;

		cout << "------------------------------------------------------------------------" << endl;
		Sleep(1000);
		cout << "---?-----------------------------------------" << endl;

		cout << "\tAlright then. Here's a battle." << endl;

		cout << "---------------------------------------------" << endl;
		Sleep(1000);

		Battle BattleObject; // Creates a battle object for function use
		BattleObject.BattleStart();

	}
			  //system("pause");
			  break;

	case '2': {
		cout << "---CHOICE---------------------------------------------------------------" << endl;

		cout << "\t- Take me to a battle!" << endl;
		cout << "\t* I need to buy some items first." << endl;
		cout << "\t- Tell me more about this game." << endl;

		cout << "------------------------------------------------------------------------" << endl;

		Shop ShopObject; // Creates a shop object for function use
		ShopObject.Storefront();
	}
			  //system("pause");
			  break;

	case '3': {
		cout << "---CHOICE---------------------------------------------------------------" << endl;

		cout << "\t- Take me to a battle!" << endl;
		cout << "\t- I need to buy some items first." << endl;
		cout << "\t* Tell me more about this game." << endl;

		cout << "------------------------------------------------------------------------" << endl;

		cout << "---CHOICE---------------------------------------------------------------" << endl;

		cout << "\t- This game is a demo of a text based RPG being developed" << endl;
		cout << "\t- by Nathan Grey! He's a Graphic Designer with an interest" << endl;
		cout << "\t- in programming and will be working on expanding this project" << endl;
		cout << "\t- all throughout the Summer! Check GitHub/NathanGrey for updates!" << endl;

		cout << "------------------------------------------------------------------------" << endl;
		PlayerChoiceFunction1();
	}
			  //system("pause");
			  break;

	default:    cout << "---?-----------------------------------------" << endl;

		cout << "\tThis is a bug of some sort!" << endl;

		cout << "---------------------------------------------" << endl;

		//system("pause");
		break;
	}

	return 0;
}

// *****************************************************
//
//
//                  MAIN PROGRAM
//
//
// *****************************************************

int main() // Main program
{

	PrintMainMenu(); // Function to print the main menu

	Player PlayerObject; // Creates a player object for function use
	
	//PlayerObject.TrackPlayerExperience();
	cout << "---?-----------------------------------------" << endl;

	cout << "\tWhat is your name?" << endl;

	cout << "---------------------------------------------" << endl;
	string Name;
	cin >> Name;
	PlayerObject.SetName(Name);
	
	cout << "---?-----------------------------------------" << endl;

	cout << "\t" << PlayerObject.PrintName() << "? That's a great name." << endl;

	cout << "---------------------------------------------" << endl;
	Sleep(1000);
	cout << "---?-----------------------------------------" << endl;

	cout << "\tTell me a bit aout yourself." << endl;

	cout << "---------------------------------------------" << endl;
	string Paragraph;
	cin >> Paragraph;
	PlayerObject.SetAboutPlayer(Paragraph);

	cout << "---?-----------------------------------------" << endl;

	cout << "\tAnd just out of curiosity..." << endl;

	cout << "---------------------------------------------" << endl;
	Sleep(1000);
	cout << "---?-----------------------------------------" << endl;

	cout << "\tEnter your favorite number." << endl;

	cout << "---------------------------------------------" << endl;

	int FavoriteNumber;

	cin >> FavoriteNumber;


	int* FavoriteArray = new int[FavoriteNumber]; // Dynamically allocates array of numbers counting to favorite.
	for (int i = 0; i < FavoriteNumber; i++)
	{

		FavoriteArray[i] = i + 1;
		
		cout << "---?-----------------------------------------" << endl;
		
		cout << "\t" << FavoriteArray[i] << " " << "..." << endl; 

		cout << "---------------------------------------------" << endl;
		Sleep(1000);
	}

	delete[] FavoriteArray;  // Deletes the array to free up memory

	cout << "---?-----------------------------------------" << endl;

	cout << "\tSorry, I just love to count." << endl;

	cout << "---------------------------------------------" << endl;
	Sleep(1000);
	cout << "---?-----------------------------------------" << endl;

	cout << "\tLet me show you some features " << endl;
	cout << "\tthat are currently available." << endl;

	cout << "---------------------------------------------" << endl;
	Sleep(1000);
	PlayerChoiceFunction1(); // Calls back to the Choice#1 function

	return 0;
}
