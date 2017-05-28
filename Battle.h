#ifndef __BATTLE_H_INCLUDED__
#define __BATTLE_H_INCLUDED__

#include "BattleFunctions.h"
#include "Player.h"
#include "Enemy.h"
#include "Inventory.h"
using namespace std;
class Battle
{

private:
	// Declaration of private member variables
	int m_BattleChoice;
	int m_Run;
	int m_SkillChoice;
	int m_ItemChoice;
	int m_HealItem;
	bool m_BattleOver;
	bool m_GameOver;



public:
	Battle();
	// Declaration of class methods
	// This function sets all the variables at the start of a battle
	void BattleStart();

	int BattleMenu(); // Function for the basic battle menu

	int Run(); // Function for the escape feature

	int Item(); // Function containing the items

	int Skill(); // Function containing the skills

	int Fight(); // Function for a regular attack
				 // The Battle class is composed of the Enemy, Player and Inventory classes

	Player p;
	//Inventory i;
	Enemy e;
};
#endif
