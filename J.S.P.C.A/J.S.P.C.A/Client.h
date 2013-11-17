#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Animal.h"
#include "DateTime.h"


using namespace std;


#ifndef Client_H
#define Client_H

class Client
{

char ServiceCharge[20];
char Reason[50];

private:
	char FirstName[30];
	char LastName[30];
	int ContactNumber;
	Animal animal;
	DateTime date;
public:
	//////Constructor//////////
	friend class Intervention;
	Client(){}
	Client(char fname, char lname, int contactnumber, char sc, char res, char tA, char bree, char gen, int ag, char AniT)
	{
		FirstName[30] = fname;
		LastName[30] = lname;
		ContactNumber = contactnumber;
		ServiceCharge[20] = sc;
		Reason[50] = res;
	}
		///Methods//////
	void Appointment(); 
	void CheckUp();
	void View(); 
	void Pay();
	void Display();
	void DateCheck(char*);
	void MonthCheck(char*);
	void YearCheck(char*);
	void ContactCheck(char*);
	void StringChecker(char*);


	///Mutators & Accessors///////
	void SetFirstName (char fName){FirstName[30]=fName;}

	char  GetFirstName(){return FirstName[30];}

	void SetLastName (char lName){ LastName[30] = lName;}

	char GetLastName(){return LastName[30];}

	void SetContactNumber (int numb){ContactNumber= numb;}

	int GetContactNumber (){return ContactNumber;}

	void SetServiceCharge (char Scharge){ServiceCharge[20]=Scharge;}

	char  GetServiceCharge(){return ServiceCharge[20];}

	void SetReason (char res){ Reason[50] = res;}

	char GetReason(){return Reason[50];}



		
};
#endif