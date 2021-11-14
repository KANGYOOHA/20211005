#include "Engine.h"
#include "Player.h"
#include "Map.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
	cout << "엔진이 생성 되었습니다." << endl;
	Initialize();
}

Engine::~Engine()
{
	Terminalize();
	cout << "엔진이 파괴 되었습니다." << endl;
}

void Engine::Initialize()
{
	cout << "초기화 되었습니다." << endl;
}

//Frame 생성
void Engine::Run()
{
	while (true)
	{
		Input();
		Process();
		Render();
	}
	
}

void Engine::Terminalize()
{
	cout << "종료 되었습니다." << endl;
}

void Engine::Input()
{
	std::cout << "입력받는다." << std::endl;
}

void Engine::Process()
{
	std::cout << "처리한다." << std::endl;
}

void Engine::Render()
{
	std::cout << "렌더링한다." << std::endl;
}
