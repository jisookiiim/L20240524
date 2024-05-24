#include <iostream>
#include <vector> 

using namespace std;

#include "Player.h" 
#include "Monster.h"


int main()
{

	While(true)
	{
		string Key;
		cin >> key;
		if (Key == "1")
		{
			MyMonster.push_back(new Monster());
		}

		MyPlayer
	}

	MyMonster.push_back(new Monster());
	MyMonster.push_back(new Monster());
	MyMonster.push_back(new Monster());
	MyMonster.push_back(new Monster());
	MyMonster.push_back(new Monster());

	MyPlayer->Move(); //ÀÌµ¿

	for (int i = 0; i < MyMonster.size(); ++i)
	{
		MyMonster[i]->Move();
		MyMonster[i]->Attack();
	}


	delete MyPlayer; //Á×À½
	for (int i = 0; i < MyMonster.size(); ++i)
	{
		delete MyMonster[i];
	}

	MyMonster.clear();

	return 0;
}

