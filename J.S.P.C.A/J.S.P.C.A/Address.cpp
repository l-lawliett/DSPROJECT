#include "Address.h"




void Address:: Locationinfo()
{
	system("cls");
	fflush(stdout);
	cout<<"\n\t\t\tEnter the Parish the Animal is Located in\n\t\t\t\t\t ";
				fflush(stdout);
				fflush(stdout);
			ParishCheck(Parish);

	cout<<"\n\t\t\tEnter the Area The Animal is Loacted in\n\t\t\t\t  (E.g Public or Private)\n\t\t\t\t\t ";
				fflush(stdout);
				fflush(stdout);
			AreaCheck(Area);


				fflush(stdout);
				fflush(stdout);
	cout<<"\n\t\t\tEnter the Street Animal was found on\n\t\t\t ";
				cin.ignore();
			cin.getline(Street,40);
				fflush(stdout);
				fflush(stdout);


}


void Address::View()
{

	ParishCheck(Parish);
	SetParish(Parish[25]);
	AreaCheck(Area);
	SetArea(Area[10]);
	cin.getline(Street,40);
	SetStreet(Street[40]);

}