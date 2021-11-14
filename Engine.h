#pragma once
#include "Map.h"

class Player;
class Map;

//엔진은 유저의 입력을 받고 처리하고 화면에 그린다.
// 우리 엔진은 플레이어를 가지고 있고 맵도 가지고 있다.(has a)
//0.초기화 한다. Initialize();
//1.입력을 받는다. Input();
//2.정보를 처리한다. Process();
//3.화면에 그린다. Render();
//4.종료한다. Terminalize();
class Engine
{
public:
	Engine();//Default Constructor
	~Engine(); //Destructor

	Player* player;
	Map* map;

	void Run();
	

private:

	void Initialize();
	void Terminalize();

	void Input();
	void Process();
	void Render();

};

