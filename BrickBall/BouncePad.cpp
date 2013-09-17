
#include "BouncePad.h"

CBouncePad::CBouncePad(void)
{
}

CBouncePad::~CBouncePad(void)
{
}
/*to move oad left*/
bool CBouncePad::MoveLeft()
{
	
	float vTXPos = mPadPosition.getXPos() - 1;
	
	if(this->mMoveMin >vTXPos)
		this->mPadPosition.setXPos(vTXPos);

return true;
}
/*to move pad right*/
bool CBouncePad::MoveRight()
{
float vTXPos = mPadPosition.getXPos() + 1;
	
	if(this->mMoveMax > vTXPos)
		this->mPadPosition.setXPos(vTXPos);

return true;
}

bool CBouncePad::Resize(const int pType)
{

	return true;
}

float getMin()
{
return 0;
}
float getMoveMax()
{
	return 0;

}
void setMoveMinMax(float pMin, float pMax)
{
}