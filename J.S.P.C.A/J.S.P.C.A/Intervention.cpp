#include "Intervention.h"
#include "InterventionList.h"
#include <conio.h>




void Intervention::Record()
{
	i = 0;
	bool loop = true;
	int d,m,y,h,min;
	count = 0;
	char tempda[99999],tempyr[99999],tempmnth[99999],temphr[99999],tempmin[99999];
	char tempOutcome [] = {"N/A"};
	system("cls");
	cout<<"\n\n\n\t\tWelcome To The J.S.P.A Veterinary Portal Please Follow\n\n\t\t\t  The Instructions Below\n";
	cout<<"\n\t\t     Please Enter your Intervention Number\n\t\t\t\t";

	StringIntNumber(InterventionNumber);

		   cout<<"\n\t\t\tEnter (A) if There isn't any Outcome otherwise Enter (B)\n\t\t\t\t\t ";
				fflush(stdout);
				fflush(stdout);
				do{
					fflush(stdout);
					fflush(stdout);
					cin.ignore();
					cin.getline(OutCome,25);
					int r = strlen(OutCome);
				fflush(stdout);
				for(i=0;i<r;i++)
					{
					
						OutCome[i] = tolower(OutCome[i]);

						if(OutCome[i]!='a' && OutCome[i]!='b')
						 {
							 loop = true;
						 }
						 else
						 {
							 loop = false;
							  if(OutCome[i]=='a')
							 {
								 strcpy_s(OutCome,tempOutcome);
								  break;
							 }
							  else
								  if(OutCome[i]=='b')
							  {
								  char OutComeEmpty[25] = {};
								  cin.getline(OutComeEmpty,25);
								  strcpy_s(OutCome,OutComeEmpty);
								   break;
							  }
							
						 }

					
					}

					  if(i==r && loop==true)
						{
						  i=0;

						}
				}while(loop);
		 
	cout<<"\n\t\t\t  Enter The clinic Name\n\t\t\t  ";
		fflush(stdout);
		StringChecker(ClinicName);
		fflush(stdout);
		cout<<"\n\n\t\t     Enter the Date for The Intervention (E.g Date <=31)\n\t\t\t        ";
		do
		{
			cin>>tempda;
			d = atol(tempda);
			systemDate.SetsDay(d);
		}while(d<1 || d >31);
		fflush(stdout);
		cout<<"\n\n\t\t     Enter the Month in Numbers (E.g Month <=12)\n\t\t\t        ";
		do
		{
			cin>>tempmnth;
			m = atol(tempmnth);
			systemDate.SetsMonth(m);
		}while(m<1 || m>12);
		fflush(stdout);
		fflush(stdout);
		cout<<"\n\n\t\t     Enter The Year in Numbers (E.g Year==2013)\n\t\t\t      ";
		do
		{
			cin>>tempyr;;
			y= atol(tempyr);
			systemDate.SetsYear(y);
		}while(y < 1 || y < 2013);
		fflush(stdout);
		cout<<"\n\n\t\t     Enter The Hours in Numbers (E.g Hour <=24)\n\t\t\t        ";
		do
		{
			cin>>temphr;
			h = atol(temphr);
			systemDate.SetHr(h);
		}while(h<1 || h>24);
		fflush(stdout);
		cout<<"\n\n\t\t     Enter The Minutes in Numbers (E.g Minutes <=60)\n\t\t\t        ";
		do
		{
			cin>>tempmin;
			min= atol(tempmin);
			systemDate.SetMin(min);
		}while(min < 1 || min > 60);


	cout<<"\n\t\t\t";system("pause");
	system("cls");
	cout<<"\n\n\n\t\tWhat is the Purpose of the Clients Visit\n\t\t\t        ";
		fflush(stdout);
	cout<<"\n\t\t\tEnter\n\t\t\tA: for an Appointment\n\t\t\tB: for a CheckUp\n\t\t\tC: for Main Menu\n\t\t\tD: Exit\n\t\t\t        ";
		do
	{
		count++;
		if(count>2)
		{
			cout<<"\n\t\t\tRemember You must only Enter the Allowed Value\n\t\t\t        ";
			
		}
		option = tolower(_getch());//// accept an input until the requested input is given	

	}while(option<'a'||option>'d');

	switch(option)
	{
	case 'a':applicant.Appointment();break;
	case 'b':applicant.CheckUp();break;
	case 'c':Menu();break;
	case 'd':exitSystem();break;
	}


}





void Intervention::Removal()
{
	cout<<"Enter The out come Of the Animal";
		cin>>OutCome;
	


}

void Intervention::Report()
{



}

void Intervention::Update()
{


}


void Intervention::Visit()
{
	system("cls");
		InterventionList l;
	cout<<"\n\n\n\t\t     Veterinary Portal Please Follow The:\n\n\t\t\t   Instructions Below\n";
	cout<<"\n\t\t     To select the Menu Enter the Suitable Letter\n\t\t\t(A): Add Record\n\t\t\t(B): Update Record\n\t\t\t(C): View (Single Record)\n\t\t\t(D): View All\n\t\t\t(E): Delete\n\t\t\t(F): Main Menu\n\t\t\t(G): Exit:";
		do
	{
		option = tolower(_getch());//// accept an input until the requested input is given

	}while(option<'a'||option>'g');

	switch(option)
	{
	case 'a':l.AddNode(),Menu();break;
	case 'b':l.modifylist(),Menu();break;//update
	case 'c':l.searchlist(),Menu();; break;//veiw
	case 'd':l.displaylist(),Menu();;break;
	case 'e':l.deleterecord(),Menu();;break;
	case 'f':Menu();break;
	case 'g':exitSystem();break;


	}

}



void Intervention::Menu()
{
	
	system("cls");	
	cout<<"\n\t\t   Welcome to the Veterinary Clinic Portal"<<endl;
	cout<<"\n\t\t\tChoose from the Options Below: "<<endl;
	fflush(stdout);
	cout<<"\n\t\t\tEnter:\n\t\t\tA: Client Visit\n\t\t\tB: Removal \n\t\t\tC: System Report\n\t\t\tD:Exit:"; 
		do
	{
		option = tolower(_getch());//// accept an input until the requested input is given

	}while(option<'a'||option>'d');

	switch (option)/////Case with GIven Options
	{
		case 'a':Visit();break;

		case 'b':Removal();break;

		case 'c':Report();break;
		case 'd':exitSystem();break;
	}


}

void Intervention::Login()
{
	 /////USE TO MASK PASSCODE////////////
	char ch[9];
	char passcode[13];
	//char passcode2[13];
	 char rpass[] [100]={"1234567890","5432109876","9876565467","6789432346","5543901276","3357654564","2217868765"};
	int r = 0,c=0;
	bool nloop = true;

			cout<<"\n\n\n\t\tWelcome To The J.S.P.A Veterinary Portal Please Follow\n\n\t\t\t  The Instructions Below\n";
			cout<<"\n\n\t\t\tEnter Employee's Password\n\n\t\t\t      Password:";
	do
	{
         for(i=0;i<10;)
  		 {
			
		ch[i]=_getch();
			if(ch[i]==13)
			 break;
			if (ch[i]==8)
			  {
			if(i>0)
			  {
			  _putch('\b');
			  printf(" ");
			  _putch('\b');
			  passcode[--i]='\0'; }
			  continue;}
			  cout<<"*";
			  strcpy_s(passcode,ch);
			  i++;
			  passcode[i]='\0';

          }
		 cout<<"\n\t\t\t\t   ";
		 for(c;c<7;c++)
		 {
		  if((strcmp(passcode,rpass[c])!=0))
				 {
			  
					 nloop = true;
				 }
		  else{

			  nloop = false;
			  break;
				}

		  }
			  if(c==7 && nloop==true)
			  {
				  c=0;

			  }

	}while(nloop);

	Menu();


}

void Intervention::Display()
{
	cout<<"\n\t\t\tIntervetion Date:"<<systemDate.GetsDay()<<"/"<<systemDate.GetsMonth()<<"/"<<systemDate.GetsYear();
	cout<<"\n\t\t\tClient's Name:";applicant.Display();
	cout<<"\n\t\t\tClinic Visited:"<<ClinicName
	<<"\n\t\t\tAppointment Date:"<<applicant.date.GetDay()
	<<"/"<<applicant.date.GetMonth()<<"/"<<applicant.date.GetYear()<<endl;
	cout<<"\t\t\t";system("pause");
}

void Intervention::exitSystem()
{
	cout<<"Sorry But the Program will be shutting Down\n";
	exit(1);
}

void Intervention::View()
{
	system("cls");
	cout<<"\n\t\t\tEnter The New Intervention Number";
	StringIntNumber(InterventionNumber);
	SetInterventionNumber(InterventionNumber[10]);
	cout<<"\n\t\t\tEnter The New ClinicName";
	StringChecker(ClinicName);
	SetInterventionNumber(ClinicName[25]);

}

