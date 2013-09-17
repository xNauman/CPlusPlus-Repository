#pragma once
#include "position.h"
#include <iostream>

using std::cout;

class CBallMovement
{
public:

	CBallMovement(CPosition);
	CBallMovement(void);
	~CBallMovement(void);

	//void changeDirection();

	//void getDirection();
	
	CPosition getBallPosition();

    void setBallPosition(CPosition);

	bool move();

	void setBoundries(float pMinX,float pMinY,float pMaxX,float pMaxY);

private:

	CPosition mBallPosition;

	float m_X_MovementOffset;
	float m_Y_MovementOffset;

	    float mMaxX;
		float mMaxY;
		
	    float mMinX;
		float mMinY;

};
