#include <iostream>
#include "Intervention.h"
#include <string>


using namespace std;

#ifndef InterventionList_H
#define InterventionList_H


class InterventionList
{
private:
	Intervention n;
	Client listapplicant;
	DateTime listSystemDate;
	DateTime listIntendedDate;
	Animal listanimal;
	Address listlocation;
	Intervention *head;
public:

	InterventionList()
	{
		head = NULL;
	}
   
	InterventionList(char number,char clinicname ,char outcome, int da,int mnt,int y,int ida,int imnt,int iy,
			char fn, char ln, int cn, char sc, char ress,char tA, char bree, char gen, int ag, char AniT, char are, char par, char stret)
		{
			n.SetInterventionNumber(number);
			n.SetClinicName(clinicname);
			n.SetOutCome(outcome);
			listSystemDate.SetDay(da);
			listSystemDate.SetMonth(mnt);
			listSystemDate.SetYear(y);
			listIntendedDate.SetDay(ida);
			listIntendedDate.SetMonth(imnt);
			listIntendedDate.SetYear(iy);
			listapplicant.SetFirstName(fn);
			listapplicant.SetLastName(ln);
			listapplicant.SetContactNumber(cn);
			listapplicant.SetServiceCharge(sc);
			listapplicant.SetReason(ress);
			listanimal.SetTypeofAnimal(tA);
			listanimal.SetBreed(bree);
			listanimal.SetGender(gen);
			listanimal.SetAge(ag);
			listanimal.SetAnimalTreatment(AniT);
			listlocation.SetArea(are);
			listlocation.SetParish(par);
			listlocation.SetStreet(stret);

		}

	



	void AddNode();
	void displaylist();
	void modifylist();
	void deleterecord();
	void searchlist();






};
#endif