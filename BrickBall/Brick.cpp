
#include "Brick.h"

CBrick::CBrick(void)
{
}

CBrick::~CBrick(void)
{
}

CBrick::CBrick(float pHeigth,float pWidth)
{
	this->height = pHeigth;
	this->width = pWidth;
}


CBrick::CBrick(float pHeigth,float pWidth, CPosition pPos)
{
	this->height = pHeigth;
	this->width = pWidth;

	this->mPosition = pPos;
}

CPosition CBrick::getPosition()
{
	return this->mPosition;
}

void CBrick::setPosition(CPosition pPos)
{
	this->mPosition = pPos;
}

void CBrick::setHeight(float pHeight)
{
	this->height = pHeight;
}

void CBrick::setWidth(float pWidth)
{
	this->width = pWidth;
}

float CBrick::getWidth()
{
	return width;
}

float CBrick::getHeigth()
{
	return height;
}