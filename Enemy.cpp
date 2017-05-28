#include "BattleFunctions.h"
#include "Enemy.h"
#include "Player.h"
#include <windows.h> // Allows Windows OS specific functions
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Enemy::EnemyAttack(Player& p)
{
	Sleep(1000);
	cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
	cout << "\tThe enemy attacks!" << endl << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;

	m_EnemyDamage = rand() % 50 + 1;
	p.m_PlayerHealth -= m_EnemyDamage;
	Sleep(1000);
	cout << "---BATTLE---------------------------------------------------------------" << endl << endl << endl;
	cout << "\tThe enemy did " << m_EnemyDamage << " damage to the you!" << endl << endl;
	cout << "\tYou have " << (p.m_PlayerHealth >= 0 ? p.m_PlayerHealth : 0) << " HP!" << endl << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;
	Sleep(1000);
}
