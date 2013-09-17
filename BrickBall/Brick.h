#pragma once
#include "position.h"

class CBrick
{
public:
	CBrick(void);
	~CBrick(void);
    CBrick(float pHeigth,float pWidth);
	CBrick(float pHeigth,float pWidth,CPosition pPos);

	void setHeight(float pHeight);
	void setWidth(float pWidth);

	float getWidth(void);
		float getHeigth(void);

	CPosition getPosition();
	void setPosition(CPosition);
private:
	CPosition mPosition;
	float width;
	float height;
};
