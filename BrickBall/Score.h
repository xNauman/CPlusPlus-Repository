#pragma once

class CScore
{
public:
	CScore(void);
	~CScore(void);

public:
	 void setTopScore();
	 double getTopScore();

	 void setCurrentScore();
	 double getCurrentScore();

private:
	double mCurrentScore;
	double mTopScore;
};
