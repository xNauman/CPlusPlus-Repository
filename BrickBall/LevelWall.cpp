
#include "LevelWall.h"

CLevelWall::CLevelWall(void)
{
}

CLevelWall::~CLevelWall(void)
{
}
/*To load a leavel form a file*/
bool CLevelWall::LoadBricksFromFile(string s)
{
	return true;
}
/*return number of bricks*/
float CLevelWall::getNumberOfBricks()
{
	return this->mNumberOfBricks;
}
/*set number of bricks*/
void CLevelWall::setNumberOfBricks(float pBNum)
{
	this->mNumberOfBricks = pBNum;
}
/*get wall position*/
CPosition CLevelWall::getWallPosition()
{
	return this->mWallPosition;
}
/*set wall position*/
void CLevelWall::setWallPosition(CPosition pWPos)
{
	this->mWallPosition = pWPos;
}
/*to get the width of wall*/
float CLevelWall::getWallWidth()
{
	return this->mWallWidth;
}

void CLevelWall::setWallWidth(float pWidth)
{
	this->mWallWidth = pWidth;
}
float CLevelWall::getWallHeight()
{
	return this->mWallHeight;
}
void CLevelWall::setWallHeight(float pWHeight)
{
	this->mWallHeight = pWHeight;
}