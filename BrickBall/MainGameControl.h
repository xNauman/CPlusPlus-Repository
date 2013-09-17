#pragma once
#include <iostream>
using  std::cout;
class MainGameControl
{
public:
	MainGameControl(void);
	~MainGameControl(void);

	bool RunGame(int Mode);
	
	
	bool ExitGame();
	/*
	bool ResetGame();
	bool PauseGame();
	bool RunDemo
	*/
#define MODE_1 1000
};
