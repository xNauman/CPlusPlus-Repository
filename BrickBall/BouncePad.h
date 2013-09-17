#pragma once
#include "Position.h"
class CBouncePad
{
public:
	CBouncePad(void);
	~CBouncePad(void);

bool	MoveLeft();

bool	MoveRight();

bool	Resize(const int);

void setPadPosition(CPosition);

CPosition getPadPosition();


void setMoveMinMax(float pMin,float pMax);
float getMoveMin();
float getMoveMax();

private:
	CPosition mPadPosition;

	float mMoveMin;
	float mMoveMax;
/*const int SHORT_PAD = -1;

const int LONG_PAD = 1;

const int NORMAL_PAD = 0;
*/
};
