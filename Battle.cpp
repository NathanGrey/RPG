#include "BattleFunctions.h"
#include "Battle.h"
#include "Player.h"
#include "Enemy.h"
#include <windows.h> // Allows Windows OS specific functions
#include <iostream>
#include <iomanip>

using namespace std;
Battle::Battle()
{

}
void Battle::BattleStart()
{

	p.m_PlayerHealth = 100;
	e.m_EnemyHealth = 100;
	e.m_EnemyExperience = 30;
	e.m_EnemyGold = 200;
	p.m_PlayerDamage = rand() % 40 + 20;
	system("cls");
	cout << "---INFO-----------------------------------------------------------------" << endl << endl;
	cout << "                          What will you do?" << endl << endl;
	cout << "------------------------------------------------------------------------     " << endl << endl;

	BattleMenu();
}

int Battle::BattleMenu()
{
	if (p.m_PlayerHealth <= 0)
	{
		m_BattleOver = true;
		m_GameOver = true;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou lost the battle..." << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		return 0;
		system("pause");

	}
	else if (e.m_EnemyHealth <= 0)
	{
		m_BattleOver = true;

		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou won the battle!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		//	i.m_Gold += e.m_EnemyGold;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou obtained " << e.m_EnemyGold << " Gold!" << endl << endl;
		//cout << "\tTotal Gold is " << i.m_Gold << "!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		/*p.m_PlayerExperience += e.m_EnemyExperience;
		p.m_PlayerExperience++;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou obtained " << e.m_EnemyExperience << " EXP!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;*/

		p.AddExperience(20);
		p.LevelUp();
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou leveled up to level " << p.m_PlayerLevel << "!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tWould you like another battle?" << endl << endl;
		cout << "               1. YES                           2. NO" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		int PlayAgain;
		cin >> PlayAgain;
		switch (PlayAgain)
		{
		case 1: {
			Sleep(1000);
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "\tAlight then. Here's another battle!" << endl << endl;
			cout << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;

			BattleStart();
		}
		case 2: {
			Sleep(1000);
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "\tExiting the demo." << endl << endl;
			cout << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;
			return 0;
		}
		default:
			Sleep(1000);
			cout << "---?-----------------------------------------" << endl;

			cout << "\tThis is a bug of some sort!" << endl;

			cout << "---------------------------------------------" << endl;

			system("pause");
			return 0;
			break;
		}
		/*if (p.m_PlayerExperience >= 20)
		{
			p.m_PlayerLevel++;
			Sleep(1000);
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "\tYou leveled up to level " << p.m_PlayerLevel << "!" << endl << endl;
			cout << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;
			Sleep(1000);
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "\tWould you like another battle?" << endl << endl;
			cout << "               1. YES                           2. NO" << endl << endl << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;
			int PlayAgain;
			cin >> PlayAgain;
			switch (PlayAgain)
			{
			case 1: {
				Sleep(1000);
				cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
				cout << "\tAlight then. Here's another battle!" << endl << endl;
				cout << endl;
				cout << "------------------------------------------------------------------------" << endl << endl;

				BattleStart();
			}
			case 2: {
				Sleep(1000);
				cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
				cout << "\tExiting the demo." << endl << endl;
				cout << endl;
				cout << "------------------------------------------------------------------------" << endl << endl;
				return 0;
			}
			default:
				Sleep(1000);
				cout << "---?-----------------------------------------" << endl;

				cout << "\tThis is a bug of some sort!" << endl;

				cout << "---------------------------------------------" << endl;

				system("pause");
				return 0;
				break;
			}

		}
		else if (p.m_PlayerExperience >= 40)
		{p.m_PlayerLevel++;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou leveled up to level " << p.m_PlayerLevel << "!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tWould you like another battle?" << endl << endl;
		cout << "               1. YES                           2. NO" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		int PlayAgain;
		cin >> PlayAgain;
		switch (PlayAgain)
		{
		case 1: {
			Sleep(1000);
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "\tAlight then. Here's another battle!" << endl << endl;
			cout << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;
			Sleep(1000);
			BattleStart();
		}
		case 2: {
			Sleep(1000);
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "\tExiting the demo." << endl << endl;
			cout << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;
			return 0;
		}
		default:
			Sleep(1000);
			cout << "---?-----------------------------------------" << endl;

			cout << "\tThis is a bug of some sort!" << endl;

			cout << "---------------------------------------------" << endl;

			system("pause");
			return 0;
			break;
		}
		}
		return 0;
		system("pause");
	} */
	}
	do {
		
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "               1. FIGHT                          2. SKILL" << endl << endl;
		cout << "               3. ITEM                           4. RUN" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		cin >> m_BattleChoice;
		switch (m_BattleChoice)
		{
		case 1: {
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "               *  FIGHT                          -  SKILL" << endl << endl;
			cout << "               -  ITEM                           -  RUN" << endl << endl << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;

			Fight();
		}
				system("pause");
				break;

		case 2: {
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "               -  FIGHT                          *  SKILL" << endl << endl;
			cout << "               -  ITEM                           -  RUN" << endl << endl << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;

			Skill();
		}
				system("pause");
				break;

		case 3: {
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "               -  FIGHT                          -  SKILL" << endl << endl;
			cout << "               *  ITEM                           -  RUN" << endl << endl << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;

			Item();
		}
				system("pause");
				break;

		case 4: {
			cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
			cout << "               -  FIGHT                          -  SKILL" << endl << endl;
			cout << "               -  ITEM                           *  RUN" << endl << endl << endl;
			cout << "------------------------------------------------------------------------" << endl << endl;

			Run();
		}
				system("pause");
				break;

		default:   
			Sleep(1000);
			cout << "---?-----------------------------------------" << endl;

			cout << "\tThis is a bug of some sort!" << endl;

			cout << "---------------------------------------------" << endl;

			system("pause");
			return 0;
			break;
		}

	} while ((m_GameOver = true));
	return 0;
}

int Battle::Run()
{
	Sleep(1000);
	cout << "---RUN------------------------------------------------------------------" << endl << endl << endl;
	cout << "\t" << "You tried to run away!" << endl << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;

	m_Run = rand() % 100;
	//cout << m_Run << endl;
	Sleep(1000);
	cout << "---RUN------------------------------------------------------------------" << endl << endl << endl;
	cout << "\t ..." << endl << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;

	if (m_Run >= 50)
	{
		Sleep(1000);
		cout << "---RUN------------------------------------------------------------------" << endl << endl << endl;
		cout << "\t" << "You managed to escape!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		return 0;
	}

	else if (m_Run <= 49)
	{
		Sleep(1000);
		cout << "---RUN------------------------------------------------------------------" << endl << endl << endl;
		cout << "\t" << "You couldn't escape!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		BattleMenu();
	}
	return 0;
}


int Battle::Item()
{
	Sleep(1000);
	cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
	cout << "               1. HEAL ITEM                      2. BUFF ITEM" << endl << endl;
	cout << "               3. SCAN ITEM                      4. BACK" << endl << endl << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;

	cin >> m_ItemChoice;
	switch (m_ItemChoice)
	{
	case 1: {
		cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
		cout << "               *  HEAL ITEM                      -  BUFF ITEM" << endl << endl;
		cout << "               -  SCAN ITEM                      -  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou used a Heal Item!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		m_HealItem = 30;
		p.m_PlayerHealth += m_HealItem;

		if (p.m_PlayerHealth >= 100)
		{
			p.m_PlayerHealth = 100;
		}
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou recovered " << m_HealItem << " HP!" << endl << endl << endl;

		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou have " << (p.m_PlayerHealth >= 100 ? p.m_PlayerHealth : 100) << " HP!" << endl << endl << endl;

		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		BattleMenu();

	}
			system("pause");
			break;

	case 2: {
		cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
		cout << "               -  HEAL ITEM                      *  BUFF ITEM" << endl << endl;
		cout << "               -  SCAN ITEM                      -  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou used a Buff Item!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		p.m_PlayerDamage = rand() % 80 + 40;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYour attack power increases!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		BattleMenu();

	}
			system("pause");
			break;

	case 3: {

		cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
		cout << "               -  HEAL ITEM                      -  BUFF ITEM" << endl << endl;
		cout << "               *  SCAN ITEM                      -  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou used a Scan Item!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tHere are the battle stats:" << endl << endl;
		cout << "\tYour HP: " << p.m_PlayerHealth << " / Enemy HP: " << e.m_EnemyHealth << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		BattleMenu();

	}
			system("pause");
			break;

	case 4: {
		cout << "---ITEM-----------------------------------------------------------------" << endl << endl << endl;
		cout << "               -  HEAL ITEM                      -  BUFF ITEM" << endl << endl;
		cout << "               -  SCAN ITEM                      *  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		BattleMenu();
	}
			system("pause");
			break;

	default:    
		Sleep(1000);
		cout << "---?-----------------------------------------" << endl;

		cout << "\tThis is a bug of some sort!" << endl;

		cout << "---------------------------------------------" << endl;

		system("pause");
		return 0;
		break;
	}
	return 0;
}

int Battle::Skill()
{
	cout << "---SKILL----------------------------------------------------------------" << endl << endl << endl;
	cout << "               1. STRONG                         2. WEAK" << endl << endl;
	cout << "               3. TALK                           4. BACK" << endl << endl << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;

	cin >> m_SkillChoice;

	switch (m_SkillChoice)
	{
	case 1: {
		cout << "---SKILL----------------------------------------------------------------" << endl << endl << endl;
		cout << "               *  STRONG                         -  WEAK" << endl << endl;
		cout << "               -  TALK                           -  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou attack with a Strong Skill!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		p.m_StrongSkillDamage = 80;
		e.m_EnemyHealth -= p.m_StrongSkillDamage;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou did " << p.m_StrongSkillDamage << " damage to the enemy!" << endl << endl;
		cout << "\tThe enemy has " << (e.m_EnemyHealth >= 0 ? e.m_EnemyHealth : 0) << " HP!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		if (e.m_EnemyHealth > 0)
		{
			e.EnemyAttack(p);

			BattleMenu();
		}
		else if (e.m_EnemyHealth <= 0)
		{
			BattleMenu();
		}
	}
			system("pause");
			break;

	case 2: {
		cout << "---SKILL----------------------------------------------------------------" << endl << endl << endl;
		cout << "               -  STRONG                         *  WEAK" << endl << endl;
		cout << "               -  TALK                           -  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou attack with a Weak Skill!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		p.m_WeakSkillDamage = 10;
		e.m_EnemyHealth -= p.m_WeakSkillDamage;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou did " << p.m_WeakSkillDamage << " damage to the enemy!" << endl << endl;
		cout << "\tThe enemy has " << (e.m_EnemyHealth >= 0 ? e.m_EnemyHealth : 0) << " HP!" << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		if (e.m_EnemyHealth > 0)
		{
			e.EnemyAttack(p);

			BattleMenu();
		}
		else if (e.m_EnemyHealth <= 0)
		{
			BattleMenu();
		}
		system("pause");
		break;

	case 3: {

		cout << "---SKILL----------------------------------------------------------------" << endl << endl << endl;
		cout << "               -  STRONG                         -  WEAK" << endl << endl;
		cout << "               *  TALK                           -  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tYou tell the enemy about yourself and your hobbies." << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
		cout << "\tThe enemy looks disinterested." << endl << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
		Sleep(1000);
		BattleMenu();
	}
			system("pause");
			break;

	case 4: {
		cout << "---SKILL----------------------------------------------------------------" << endl << endl << endl;
		cout << "               -  STRONG                         -  WEAK" << endl << endl;
		cout << "               -  TALK                           *  BACK" << endl << endl << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;

		BattleMenu();
	}
			system("pause");
			break;

	default:    
		Sleep(1000);
		cout << "---?-----------------------------------------" << endl;

		cout << "\tThis is a bug of some sort!" << endl;

		cout << "---------------------------------------------" << endl;

		system("pause");
		return 0;
		break;
	}

	}
	return 0;
}

int Battle::Fight()
{
	Sleep(1000);
	cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
	cout << "\t" << "You used an attack!" << endl << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;

	e.m_EnemyHealth -= p.m_PlayerDamage;
	Sleep(1000);
	cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
	cout << "\tYou did " << p.m_PlayerDamage << " damage to the enemy!" << endl << endl;
	cout << "\tThe enemy has " << (e.m_EnemyHealth >= 0 ? e.m_EnemyHealth : 0) << " HP!" << endl << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;

	if (e.m_EnemyHealth > 0)
	{
		e.EnemyAttack(p);

		BattleMenu();
	}
	else if (e.m_EnemyHealth <= 0)
	{
		BattleMenu();
	}
	return 0;
}
