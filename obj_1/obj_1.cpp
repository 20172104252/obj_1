// obj_1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "ս��" << endl;
	}//��������

};
class CMake_soldier
{
protected:
	int Life_elememt;//����Դ
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
		cout << "lion_____����" << endl;
	}
};
int main()
{
    return 0;
}

