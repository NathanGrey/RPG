#ifndef __ENEMY_H_INCLUDED__
#define __ENEMY_H_INCLUDED__

#include "Player.h"
#include "Inventory.h"
#include <iostream>
#include <iomanip>


using namespace std;

class Enemy
{


public:
	char m_Enemy;
	int m_EnemyHealth;
	int m_EnemyDamage;
	int m_EnemyGold;
	int m_EnemyExperience;
	void EnemyAttack(Player& p);


};
#endif
