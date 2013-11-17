#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string>

#include "Address.h"
using namespace std;


#ifndef Animal_H
#define Animal_H


class Animal
{
private:
	char TypeofAnimal[30]; 
    char Breed[20];
	int Age;
    char Gender[6];
    char AnimalTreatment[40];
	Address Location;

public:
	Animal(){}
	Animal(char typeA, char breed, int age, char sex, char ATreat)
	{
		TypeofAnimal[30] = typeA;
		Breed[20] = breed;
		Age = age;
		Gender[6] = sex;
		AnimalTreatment[40] = ATreat;
	}

	/////Methods/////////////
	void Display();
	void AnimalInfo();
	void StringChecker(char*);
	void View();
	void GenCheck(char*);
	void AgeCheck(char*);

	//////Mutators & Accessor//////////////

	void SetTypeofAnimal (char typeofanimal){ TypeofAnimal[30] = typeofanimal;}

	char GetTypeofAnimal(){return TypeofAnimal[30];}

	void SetBreed(char bre){Breed[20] = bre;}

	char GetBreed(){return Breed[20];}

	void SetAge(int ag){Age = ag;}

	int GetAge(){return Age;}

	void  SetGender (char gender){Gender[6] = gender;}

	char GetGender (){return Gender[6];}

	void SetAnimalTreatment(char AniTreat){AnimalTreatment[40] = AniTreat;}

	char  GetAnimalTreatment (){return AnimalTreatment[40];}




};
#endif