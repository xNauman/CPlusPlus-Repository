#include "RectanglesBreaker.h"


RectanglesBreaker::RectanglesBreaker(void)
{

}

RectanglesBreaker::~RectanglesBreaker(void)
{

}

RectanglesBreaker::RectanglesBreaker(float pMainRectLength, float pMainRectWidth, float pInnerRectLength, float pInnerRectWidth)
{
	this->mInnerRectsLength = pInnerRectLength;
	this->mInnerRectsWidth = pInnerRectWidth;
	
	this->mMainRectLength = pMainRectLength;
	this->mMainRectWidth = pMainRectWidth;


	this->mRectListPos.setXPos(10);
	this->mRectListPos.setYPos(10);
	
}

bool RectanglesBreaker::BreakRectNormal()
{

	float i,j;
	i = this->mRectListPos.getXPos() ; j = this->mRectListPos.getYPos() ; 

    float vLength,vWidth;
	float vLengthDivision, vWidthDivision;

	vLengthDivision = mMainRectLength / mInnerRectsLength;
		vWidthDivision = mMainRectWidth / mInnerRectsWidth;

	vLength = this->mInnerRectsLength;
	vWidth = this->mInnerRectsWidth;

			//calculating number of rectangles possible in Mian Rectangle.
			numberOfInnerRects = ((mMainRectLength / mInnerRectsLength) * (mMainRectWidth / mInnerRectsWidth));



        //Run loops to generate rects and position them accordingly.

			//int tCount;
			for(int k = vLengthDivision; k>0; k--, i+=vLength ,j = this->mRectListPos.getYPos()){
				for(int p = vWidthDivision; p>0; p-- , j += vWidth){
		this->mInnerRectList.push_back(new CBrick(vLength,vWidth,CPosition(i,j)));
		
				}

		
			}

		cout<<"Bricks stored in the array list"<<this->mInnerRectList.size()<<endl;
	return true;
}

//this must act according to a squence
bool RectanglesBreaker::BreakRectCustom()
{
   return true;
}

int RectanglesBreaker::getInnerRectCount()
{
	return numberOfInnerRects;
}

vector<CBrick*> RectanglesBreaker::getBokenRectList()
{
	return this->mInnerRectList;
}

CPosition RectanglesBreaker::getInitPos()
{
	return mRectListPos;
}

void RectanglesBreaker::setInitPos(CPosition pPos)
{
	this->mRectListPos = pPos;
}