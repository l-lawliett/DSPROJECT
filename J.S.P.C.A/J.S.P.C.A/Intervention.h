#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

#include "DateTime.h"
#include "Client.h"


using namespace std;

#ifndef Intervention_H
#define Intervention_H


class Intervention
{
	int i,j;
	char option;
	int count;
private:
	char InterventionNumber[10];
	char ClinicName[25];
    char OutCome[25];
	DateTime systemDate;
	DateTime IntendedDate;
	Client applicant;
	Animal animal;
	Address location;
	Intervention* Next;
public:
	friend class InterventionList;
		//////Constructor//////////
		Intervention(){}

		Intervention(char number,char clinicname ,char outcome, int da,int mnt,int y,int hour,int minut,int ida,int imnt,int iy,char fn, char ln, int cn, char sc, char ress,char tA, char bree, char gen, int ag, char AniT, char are, char par, char stret)
		{
			InterventionNumber[10] = number;
			ClinicName[25] = clinicname;
			OutCome[25] = outcome;
			systemDate.SetsDay(da);
			systemDate.SetsMonth(mnt);
			systemDate.SetsYear(y);
			systemDate.SetHr(hour);
			systemDate.SetMin(minut);
			IntendedDate.SetDay(ida);
			IntendedDate.SetMonth(imnt);
			IntendedDate.SetYear(iy);
			applicant.SetFirstName(fn);
			applicant.SetLastName(ln);
			applicant.SetContactNumber(cn);
			applicant.SetServiceCharge(sc);
			applicant.SetReason(ress);
			animal.SetTypeofAnimal(tA);
			animal.SetBreed(bree);
			animal.SetGender(gen);
			animal.SetAge(ag);
			animal.SetAnimalTreatment(AniT);
			location.SetArea(are);
			location.SetParish(par);
			location.SetStreet(stret);
			Next = NULL;

		}

			Intervention(Intervention &copy)
			{
			InterventionNumber[10] = copy.InterventionNumber[10];
			ClinicName[25] = copy.ClinicName[25];
			OutCome[25] = copy.OutCome[25];
			systemDate.SetDay(copy.systemDate.GetsDay());
			systemDate.SetMonth(copy.systemDate.GetsMonth());
			systemDate.SetYear(copy.systemDate.GetsYear());
			IntendedDate.SetDay(copy.IntendedDate.GetDay());
			IntendedDate.SetMonth(copy.IntendedDate.GetMonth());
			IntendedDate.SetYear(copy.IntendedDate.GetYear());
			applicant.SetFirstName(copy.applicant.GetFirstName());
			applicant.SetLastName(copy.applicant.GetLastName());
			applicant.SetContactNumber(copy.applicant.GetContactNumber());
			applicant.SetServiceCharge(copy.applicant.GetServiceCharge());
			applicant.SetReason(copy.applicant.GetReason());
			animal.SetTypeofAnimal(copy.animal.GetTypeofAnimal());
			animal.SetBreed(copy.animal.GetBreed());
			animal.SetGender(copy.animal.GetGender());
			animal.SetAge(copy.animal.GetAge());
			animal.SetAnimalTreatment(copy.animal.GetAnimalTreatment());
			location.SetArea(copy.location.GetArea());
			location.SetParish(copy.location.GetParish());
			location.SetStreet(copy.location.GetStreet());
			Next = NULL;

			}

		///Methods//////
		void Record();
		void Removal ();
		void Report();
		void Visit ();
		void Menu();
		void Update();
		void Login ();
		void Display ();
		void View();
		void StringChecker(char*);
		void StringIntNumber(char*);
		void exitSystem ();

		///Mutators & Accessors

		void SetInterventionNumber (char IntNum){InterventionNumber[10]=IntNum;}

		char  GetInterventionNumer(){return InterventionNumber[10];}

		char GetClinicName(){return ClinicName[25];}

		void SetClinicName (char clinic){ ClinicName[25] = clinic;}

		char GetOutCome (){return OutCome[25];}

		void SetOutCome (char outCome){OutCome[25] = outCome;}

		//next pointer accessor
		Intervention* getNext()
		{
			return Next;
		}


		//next pointer mutator
		void setNext(Intervention *nxt)
		{
			Next = nxt;
		}



};
#endif