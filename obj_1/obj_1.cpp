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
class CMake_soldier;
class CCity;
class CSoldiers_attribute
{
protected:
	int Attack_value;
	int Life_value;
	int Name_num;
public:
	CSoldiers_attribute(int value)
	{
		Name_num = value;
	}
	void fight_attack(CSoldiers_attribute *p)//攻击
	{
		p->fight_back(this);
		p->hurt(Attack_value);
	}
	void hurt(int Attack_value)//伤害
	{
		Life_value = -Attack_value;
	}
	void fight_back(CSoldiers_attribute *p)//反击
	{
		p->hurt(Attack_value / 2);
	}
	void CSoldiers_die()
	{
		cout << "战死" << endl;
	}//死亡函数
	void reward()//奖励
	{

	}
};
class CCity
{
protected:
	int NUM;
	int city_Life_element;
	string color;
};
class CMake_soldier
{
protected:
	int Life_element;//生命源
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

