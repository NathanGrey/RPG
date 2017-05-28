#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;
class Player
{
/*private: 
	const int m_PlayerLevel;
	const int m_PlayerExperience;

	friend class Battle;*/
public:
	int m_PlayerHealth;
	int m_PlayerDamage;
	static int m_PlayerLevel;
	static int m_PlayerExperience;
	int m_WeakSkillDamage;
	int m_StrongSkillDamage;
	string m_name;
	string m_paragraph;

	void SetName(string Name);
	string PrintName();
	// Tracks Exp
	//static const int m_PlayerExperience = 0;
	// Tracks Player Level
	//static const int m_PlayerLevel = 1;

	const int AddExperience(int m_EarnedExp);
	int LevelUp();
	static const int RequiredExp[];
	Player();



	string AboutPlayer; // String to hold information about the player
	void SetAboutPlayer(string Paragraph);
	string PrintAboutPlayer();
	//void AddExperience(int m_PlayerExperience);
	//void TrackPlayerExperience();
};
#endif
