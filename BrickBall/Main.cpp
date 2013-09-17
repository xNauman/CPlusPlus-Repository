//objects includes.
#include "Ball.h"
#include "BouncePad.h"
#include "LevelWall.h"
#include "Ball.h"
//#include "stdfx.h"
//standard includes.

#include "position.h"
#include <stdio.h>
#include <fstream>
#include <iostream>
#include "rectanglesbreaker.h"
//#include <ofstream.h>
using namespace std;


void main()
{

	CPosition vPos(6,7);
    vector<CBrick*> vBrickList;

	RectanglesBreaker vRectBreak(20,20,4,3);

	vRectBreak.BreakRectNormal();
	cout<<vRectBreak.getInnerRectCount()<<endl;
	
	vBrickList = vRectBreak.getBokenRectList();

	cout<<"Width of a rect from rect list :"<<vBrickList[5]->getHeigth()<<endl;

	cout<<"Posiiton of rect x-cord:"<<vBrickList[7]->getPosition().getXPos();
	cout<<"\nPosiiton of rect y-cord:"<<vBrickList[7]->getPosition().getYPos();

	/*
	CBall vBall;
	
	vBall.setBallPosition(vPos);

	vBall.setBoundries(5,5,75,50);

	
	for(int i=0,t=0;i<=600;i++)
	{
		vBall.move();

	vBall.getBallPosition().printLocation();

	}
	
*/
	//vPos.printLocation();

	//cout<<"XPositon of the ball after movement"<<vBall.getBallPosition.getXPos()<<"\n";

         cout<<"\n BISMIALLAH"<<"\n\1";

		 
		 system("pause");


}