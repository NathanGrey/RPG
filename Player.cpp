
#include "Player.h"
#include "BattleFunctions.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Player::Player()
{
	m_PlayerExperience = 0;
		m_PlayerLevel = 1;
}
void Player::SetName(string Name)
{
	m_name = Name;
}

string Player::PrintName()
{
	return m_name;
}

/*int Player::LevelUp()
{
	return 0;
}*/

void Player::SetAboutPlayer(string Paragraph)
{
	m_paragraph = Paragraph;

}
string Player::PrintAboutPlayer()
{

	cout << "At the start of you adventure you said:" << endl;
	return AboutPlayer;
}

const int Player::RequiredExp[] =
{
	20, 40, 60, 150, 250, 500
};

int Player::m_PlayerLevel;
int Player::m_PlayerExperience;

// uses reqExp[playerLevel] to check required exp example : Level 0 = 0exp level 1 = 45...
int Player::LevelUp()
{
	while (m_PlayerExperience >= RequiredExp[m_PlayerLevel])
		++m_PlayerLevel;
	return m_PlayerLevel;
};



const int Player::AddExperience(int m_EarnedExp)
{
	m_PlayerExperience = m_PlayerExperience + m_EarnedExp;
	return m_PlayerExperience;
}

/*void Player::AddExperience(int m_PlayerExperience)
{
	
}*/
/*void Player::TrackPlayerExperience()
{
	m_PlayerExperience = 0;
}*/ 
