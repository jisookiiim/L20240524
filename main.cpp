#include <iostream>

using namespace std; 



class World
{
	void Finish();

	Floor Floors[100]; 
	Wall Walls[100];
	Player Myplayer; 
	Monster Monsters[100];
	Goal Goal[100];
};

struct collision
{

};

class Wall
{
	int X;
	int Y;
	int Shape;
	void Block();
};

class Floor
{
	int X;
	int Y;
	int Shape;
	void Block();
};

class Player
{
	int X;
	int Y;
	int Shape;
	void Move();
	void Arrive();
};

class Monster
{
	int X;
	int Y;
	int Shape;
	void Move();

};

class Goal
{
	int X;
	int Y;
	int Shape;
};

void Move();
void Arrive();
void Finish();
void Block();


class Engine
{
	void Run()
	{
		while (true)
		{
			void Input();
			void Tick();
			void Render();
		}
	}

	void Input(); 
	void Tick();
	void Render();
};

int main()
{
	//Player, Monster, Goal, Wall, Floor


	Engine* MyEngine = new Engine();
	
	MyEngine->Run();
	
	delete MyEngine;



}