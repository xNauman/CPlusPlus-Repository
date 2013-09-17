#pragma once
#include "position.h"
#include "ballmovement.h"
#include <iostream>

using  std::cout;

class CBall : public CBallMovement
{

public:
	CBall(void);
	~CBall(void);
  
private:
         
	CPosition mBallPosition;

	/*FOR THE DIRECTIONS OF BALL*/
	#define  UP 0;
	/*const int DOWN = 1;
	const int UP_LEFT = 2;
	const int UP_RIGHT = 3;
	
	const int DOWN_LEFT = 4;
	const int DOWN_RIGHT = 5;
	*/
};
