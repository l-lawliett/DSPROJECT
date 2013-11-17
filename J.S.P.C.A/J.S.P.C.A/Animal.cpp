#include "Animal.h"


void Animal::Display()
{





}

void Animal:: AnimalInfo()
{
		///////Below is Declarationn of Varible /////////
	char tempAge[99999];
	
	system("cls");
				fflush(stdout);
			cout<<"\n\t\t\tEnter the type of Animal\n\t\t\t      ";
				fflush(stdout);
				fflush(stdout);
				StringChecker(TypeofAnimal);


			cout<<"\n\t\t\tThe Breed\n\t\t\t      ";
				fflush(stdout);
				StringChecker(Breed);

			cout<<"\n\t\t\tEnter a Gender (Male or Female)\n\t\t\t      ";
				fflush(stdout);
				GenCheck(Gender);

			cout<<"\n\t\t\tEnter the Animal Age\n\t\t\t      ";
				fflush(stdout);
				AgeCheck(tempAge);
			cout<<"\n\t\t\tEnter the Animal Treatment\n\t\t\t      ";
				fflush(stdout);
				cin.ignore();
				cin.getline(AnimalTreatment,40);
				


}////End of The Method/////////



void Animal::View()
{
	char tempAge[99999];

	StringChecker(TypeofAnimal);
	SetTypeofAnimal(TypeofAnimal[30]);
	StringChecker(Breed);
	SetBreed(Breed[20]);
	AgeCheck(tempAge);
	SetAge(Age);
	cin.getline(AnimalTreatment,40);
	SetAnimalTreatment(AnimalTreatment[40]);


}