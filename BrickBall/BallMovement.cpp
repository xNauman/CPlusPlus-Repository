#include "BallMovement.h"


CBallMovement::CBallMovement(){

	this->m_X_MovementOffset = 1;
	this->m_Y_MovementOffset = 1;

	this->mBallPosition.setXPos(0);
	this->mBallPosition.setYPos (0);
	//cout<<"\2 Ball Movement Constructor\n";
}

CBallMovement::~CBallMovement(){
	cout<<"Ball Movement Destructor\n";
}

CBallMovement::CBallMovement(CPosition pPos){

	mBallPosition.setXPos( pPos.getXPos() );
	mBallPosition.setYPos( pPos.getYPos() );
}
/**
* Move the ball after cheing the apropriat position.
*/
bool CBallMovement::move()
{
	if(this->mBallPosition.getXPos() >= this->mMaxX){
		cout<<"\n ->ball is touching Max-X-axis boundry \n";
		this->m_X_MovementOffset = -1;
		
	}

	if(this->mBallPosition.getYPos() >= this->mMaxY){
			cout<<"\n ->ball is touching Max-Y-axis boundry \n";			
			this->m_Y_MovementOffset = -1;
		
	}

	if(this->mBallPosition.getXPos() <= this->mMinX){
		cout<<"\n ->ball is touching Min-X-axis boundry \n";
		this->m_X_MovementOffset = 1;
		
	}

	if(this->mBallPosition.getYPos() <= this->mMinY){
			cout<<"\n->ball is touching Min-Y-axis boundry \n";			
			this->m_Y_MovementOffset = 1;
		
	}

	//get balls position and add the offset to change the new position.
	this->mBallPosition.setXPos( (mBallPosition.getXPos() + m_X_MovementOffset) );

	this->mBallPosition.setYPos( (mBallPosition.getYPos() + m_Y_MovementOffset) );

return false;
}


/*for the change of the direction of the ball*/
/*void CBallMovement::changeDirection(){

	//this->setBallPosition
	cout<<"Ball: Change Direction\n";
}*/

/*get the direction of the moving ball*/
/*void CBallMovement::getDirection(){
}*/

/*to retrive the posstion of the ball*/
CPosition CBallMovement::getBallPosition()
{

	return mBallPosition;
}


/*for setting ball's position*/
void CBallMovement::setBallPosition(CPosition pBallPos)
{
	float tempPos = pBallPos.getXPos();
	mBallPosition.setXPos(tempPos);

	tempPos = pBallPos.getYPos();

	mBallPosition.setYPos(tempPos);
}

void CBallMovement::setBoundries(float pMinX, float pMinY, float pMaxX, float pMaxY)
{

		this->mMinX = pMinX;  mMinY = pMinY;

		this->mMaxX = pMaxX;  mMaxY = pMaxY;
}