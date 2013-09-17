#pragma once
#include "Brick.h"

#include <vector>

#include <iostream>

using namespace std;

class RectanglesBreaker
{
public:
	RectanglesBreaker(void);
	~RectanglesBreaker(void);
	RectanglesBreaker(float pMainRectLenght,float pMainRectWidth,float pInnerRectLenght,float pInnerRectWidth);

	bool BreakRectNormal();
	bool BreakRectCustom();
	int getInnerRectCount();
	void setInitPos(CPosition pPos);
	CPosition getInitPos();
	vector<CBrick*> getBokenRectList(void);
private:
	//TODO: gap b/w rects.
//int gap
	bool sequnce;

	vector<CBrick*> mInnerRectList;

	int mInnerRectsLength;
	int mInnerRectsWidth;

	int mMainRectLength;
	int mMainRectWidth;
 
	CPosition mRectListPos;

	int numberOfInnerRects;
	
};
