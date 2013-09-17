#pragma once

class CPosition
{
public:

	CPosition(float,float);
	CPosition(void);
	~CPosition(void);
	
private:
	float xPos;
	float yPos;

public:
	float getXPos();
	void setXPos(float);
	void printLocation(void);
	void operator=(CPosition);

	float getYPos();
	void setYPos(float);

};
