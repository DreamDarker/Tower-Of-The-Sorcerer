#pragma once

#include "rect.h"

// ��ҡ����NPC
class Man
{
public:
	Man();
	~Man();

	int GetHP();
	int GetATK();
	int GetDEF();

	void SetHP(int HP);
	void SetATK(int ATK);
	void SetDEF(int DEF);

private:
	int health_point;			// Ѫ��
	int attack;					// ����
	int defense;				// ����
};