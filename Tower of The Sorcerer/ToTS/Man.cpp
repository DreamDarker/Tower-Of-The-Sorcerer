#include "stdafx.h"
#include "Man.h"

int Man::GetHP()
{
	return health_point;
}

int Man::GetATK()
{
	return attack;
}

int Man::GetDEF()
{
	return defense;
}

void Man::SetHP(int HP)
{
	health_point = HP;
}

void Man::SetATK(int ATK)
{
	attack = ATK;
}

void Man::SetDEF(int DEF)
{
	defense = DEF;
}
