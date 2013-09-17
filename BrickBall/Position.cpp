
#include "Position.h"
#include <iostream>
using std::cout;

CPosition::CPosition(float pX,float pY){

	xPos = pX;
	yPos = pY;
}
CPosition::CPosition(void)
{
}

void CPosition::operator =(CPosition pPos)
{
	this->xPos = pPos.getXPos();
	this->yPos = pPos.getYPos();
}

void CPosition::printLocation(void){

	cout<<"\nX-Cord: "<<xPos;
	cout<<"\nY-Cord: "<<yPos;

}
CPosition::~CPosition(void)
{
}

float CPosition::getXPos()
{
	return xPos;
}

float CPosition::getYPos()
{
	return yPos;
}

void CPosition::setXPos(float pXPos)
{
	this->xPos = pXPos;
}

void CPosition::setYPos(float pYPos)
{
	this->yPos = pYPos;
}

