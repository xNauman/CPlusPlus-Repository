/**
*
*Author: Noman saeed.
*This class is to hold wall "peice" information.
*
*
**/

#pragma once
#include "brick.h"
#include <string>
using namespace std;

class CLevelWall : public CBrick
{
public:
	CLevelWall(void);
	~CLevelWall(void);
	
	float mWallWidth;
	float mWallHeight;
	
	float mNumberOfBricks;

	CPosition mWallPosition;

public:
	bool LoadBricksFromFile(string s);

	void setWallWidth(float);
	float getWallWidth();

	void setWallHeight(float);
	float getWallHeight();

	void setWallPosition(CPosition);
	CPosition getWallPosition();

	void setNumberOfBricks(float);
	float getNumberOfBricks();
};
