#include <iostream>
#include <string>


using namespace std;

#ifndef DateTime_H
#define DateTime_H

class DateTime
{
private:
	int Day;
	int Month;
	int Year;
	int sDay;
	int sMonth;
	int sYear;
	int Hr;
	int Min;

public:
	friend class Intervention;
	DateTime(){}
	DateTime (int day, int month, int year, int sd,int sm, int syr, int hr, int min)
	{
		Day = day;
		Month = month;
		Year = year;
		sDay = sd;
	    sMonth = sm;
	    sYear = syr;
		Hr = hr;
		Min = min;
	}

	/////Methods/////////////
	void Display();

	//////Mutators & Accessor////////////
	void SetDay (int dy){Day = dy;}

	int GetDay (){return Day;}

	void SetMonth (int mnth){Month = mnth;}

	int GetMonth (){return Month;}

	void SetYear (int yr){Year =  yr;}

	int GetYear (){return Year;}


	void SetsDay (int d){sDay = d;}

	int GetsDay (){return sDay;}

	void SetsMonth (int mth){sMonth = mth;}

	int GetsMonth (){return sMonth;}

	void SetsYear (int syr){sYear =  syr;}

	int GetsYear (){return sYear;}

	void SetHr(int h){Hr = h;}

	int GetHr(){return Hr;}

	void SetMin (int m){Min = m;}

	int GetMin(){return Min;}




};
#endif