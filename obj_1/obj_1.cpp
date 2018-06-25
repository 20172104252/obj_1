// obj_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Dragon;
class Iceman;
class Ninja;
class Lion;
class Wolf;
class CSoldiers_attribute
{
protected:
	int Attack_value;
	int Life_value;
	int Name_num;
public:
	void fight_attack(CSoldiers_attribute *p)
	{
		p.fightback(this);
		p.hurt(Attack_value);
	}
	void hurt(int Attack_value)
	{
		Life_value = -Attack_value;
	}
	void fightback(CSoldiers_attribute *p)
	{
		p.hurt(Attack_value / 2);
	}
	void CSoldiers_die()
	{
		cout << "战死" << endl;
	}//死亡函数

};
class CMake_soldier
{
protected:
	int Life_elememt;//生命源
	int Iceman;
	int Lion;
	int Ninja;
	int Wolf;
	int Dragon;
public:
	void make_one_soldiers(char *p)
	{

	}
};
class Dragon :public CSoldiers_attribute
{
public:
	void War_after()
	{
		cout << "lion_____欢呼" << endl;
	}
};
int main()
{
    return 0;
}

