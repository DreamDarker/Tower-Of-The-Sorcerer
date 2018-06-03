#pragma once

#include "rect.h"

// Íæ¼Ò¡¢¹ÖÎï¡¢NPC
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
	int health_point;			// ÑªÁ¿
	int attack;					// ¹¥»÷
	int defense;				// ·ÀÓù
};