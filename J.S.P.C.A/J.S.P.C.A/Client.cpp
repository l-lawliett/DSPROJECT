#include "Client.h"




void Client::Appointment()
{
	char temcont[99999];
	char tempda[99999],tempyr[99999],tempmnth[99999];

	//////Asking And Acepting Client's Input/////////////////
	system("cls");
		fflush(stdout);
		cout<<"\n\n\n\t\t     Enter the Clients Information\n\t\t\t";
		fflush(stdout);
		cout<<"\n\n\t\t\t  Enter the Client's\n\n\t\t\t     FirstName:";
			StringChecker(FirstName);/////passing to the validator methods

		cout<<"\n\n\t\t\t  Enter the Clients\n\n\t\t\t    LastName:";
			StringChecker(LastName);

		cout<<"\n\n\t\t\t  Enter the Clients\n\n\t\t\t    ContactNumber:";
			ContactCheck(temcont);

		system("cls");
		cout<<"\n\n\t\t\tEnter the Intended Date of the Appointment";

		cout<<"\n\n\t\t\tEnter The Date in Numbers (E.g Date <=31)\n\t\t\t\t ";
			DateCheck(tempda);
		

		cout<<"\n\n\t\t\tEnter the Month in Number (E.g Month <=12)\n\n\t\t\t\t\t";
			MonthCheck(tempmnth);

		cout<<"\n\n\t\t\tEnter The Year in Number (E.g Year==2013)\n\t\t\t\t\t";
			YearCheck(tempyr);

			Pay();

		cout<<"\n\n\t\t\tClient's Purpose of Visit\n\t\t\t   ";
		fflush(stdout);
			cin.getline(Reason,50);

		cout<<"\n\t\t\t";system("pause");
			//////Function Call Clients has a Animal////////
				animal.AnimalInfo();
				
	
}

void Client::CheckUp()
{
	char temcont[99999];
	int i=0;
	bool nloop = true;
	//////Asking And Acepting Client's Input/////////////////
		system("cls");
		fflush(stdout);
		cout<<"\n\n\n\t\t\tEnter the Clients Information\n\t\t\t";
		fflush(stdout);
		cout<<"\n\n\t\t\tEnter the Client's\n\n\t\t\t  FirstName:";
			StringChecker(FirstName);

		cout<<"\n\n\t\t\tEnter the Clients\n\n\t\t\t  LastName:";
			StringChecker(LastName);

		cout<<"\n\n\t\t\tEnter the Clients\n\n\t\t\t  ContactNumber:";
			ContactCheck(temcont);

		///Calling the pay method/////
			Pay();
		
		fflush(stdout);
		cout<<"\t\t\tClient's Purpose of Visit\n\t\t\t   ";
		fflush(stdout);
		fflush(stdout);
		cin.getline(Reason,50);
			

	cout<<"\n\t\t\t";system("pause");
			//////Function Call Clients has a Animal////////
				animal.AnimalInfo();


}


void Client::View()
{
	char temcont[99999],tempda[99999],tempyr[99999],tempmnth[99999];;
	StringChecker(FirstName);
	SetFirstName(FirstName[25]);
	StringChecker(LastName);
	SetLastName(LastName[25]);
	ContactCheck(temcont);
	SetContactNumber(ContactNumber);
	DateCheck(tempda);
	MonthCheck(tempmnth);
	YearCheck(tempyr);
	cin.getline(Reason,50);
	SetReason(Reason[50]);


}

void Client::Pay()
{
	int i=0,j; 
	system("cls");
	cout<<"\n\n\t\t\tWhat's is the Service of Charge:\n\t\t\t\tIt only can be\n\t\t\t\tPay in full (Pay)\n\t\t\t\tContribution (Contribution)\n\t\t\t\tNot Pay(not pay)\n\t\t\t\t\t";
		do
		{
			fflush(stdout);
			StringChecker(ServiceCharge);
			j = strlen(ServiceCharge);
			for(i;i< j;i++)
			{
			ServiceCharge[i] = tolower(ServiceCharge[i]);
			}
		
		fflush(stdout);	
		}while((strcmp(ServiceCharge,"pay")!=0) && (strcmp(ServiceCharge,"not pay")!=0) && (strcmp(ServiceCharge,"contribution")!=0));


}


void Client::Display()
{

	cout<<LastName;

}