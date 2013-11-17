#include "Animal.h"
#include "Client.h"
#include "Intervention.h"
#include "Address.h"


void Animal:: StringChecker(char* AnyString)
{
	int i =0, b;
	 bool nloop = true;
	
	 do
				{
					cin.getline(AnyString,30);
					b = strlen(AnyString); 

					for( i; i <b; i++)
					{
					
						if(isalpha(AnyString[i]))
						{
							nloop = false;
							continue;
						}
						else
							if(isdigit(AnyString[i]))
							{
								nloop = true;
								break;
							}
						else
						{
							nloop = true;
						}
					}

				}while(nloop);



}

void Client:: StringChecker(char* AnyString)
{
	int i =0, b;
	 bool nloop = true;
	
	 do
				{
						fflush(stdout);
						cin.getline(AnyString,30);
					b = strlen(AnyString); 

					for( i; i <b; i++)
					{
					
						if(isalpha(AnyString[i]))
						{
							nloop = false;
							continue;
						}
						else
							if(isdigit(AnyString[i]))
							{
								nloop = true;
								break;
							}
						else
						{
							nloop = true;
						}
					}

				}while(nloop);



}


void Intervention:: StringChecker(char* AnyString)
{
	int i =0, b;
	 bool nloop = true;
	
			do
				{
						fflush(stdout);
						fflush(stdout);
						fflush(stdout);
						cin.getline(AnyString,25);
						b = strlen(AnyString); 

					for( i; i <b; i++)
					{
					
						if(isalpha(AnyString[i]))
						{
							nloop = false;
							continue;
						}
						else
							if(isdigit(AnyString[i]))
							{
								nloop = true;
								break;
							}
						else
						{
							nloop = true;
						}
					}

				}while(nloop);




}


void Intervention:: StringIntNumber(char* AnyString)
{
	int a;
	bool loop = true;
		 do /////Ensure that the correct format for intervention is inputted
		   {
			    cin>>InterventionNumber;
			for( i; i <10; i++)
			{
				if(InterventionNumber[i]=='-')
					{
						a = InterventionNumber[i];
						if(a==45 && isdigit(InterventionNumber[++i]))
						{
						loop = false;
						break;
						}
				}	
				if(isdigit(InterventionNumber[i]))
				{
						continue;	
				}
				else
				{
					Record();
				}
				
			}

		   }while(loop);


}

void Client::ContactCheck(char* AnyInt)
{
	int h;
		do
		{
			cin>>AnyInt;
			h = strlen(AnyInt);
			ContactNumber = atol(AnyInt);
				
		}while(h<7 && ContactNumber>9999999);

}

void Client::DateCheck(char* AppointedDate)
{
	int d;
	do
		{
			cin>>AppointedDate;
			d = atol(AppointedDate);
			date.SetDay(d);
		}while(d<1 || d >31);


}

	void Client::MonthCheck(char* AppointedMonth)
	{
		int m;
		do
		{
			cin>>AppointedMonth;
			m = atol(AppointedMonth);
			date.SetMonth(m);
		}while(m<1 || m>13);


	}


	void Client::YearCheck(char* AppointedYear)
	{
		int y;
		do
		{
			cin>>AppointedYear;
			y= atol(AppointedYear);
			date.SetYear(y);
		}while(y < 1 || y < 2013);

	}


	void Animal::GenCheck(char* Gend)
	{
		int i=0,g;
		char sex[] = "female";
		char sex1[] = "male";
		do
			{
				cin>>Gend;
			for(i;i<6;i++)
					{
						Gender[i] = tolower(Gender[i]);

				g = Gender[i];
					if(g > 97 && g < 122)
					{
						continue;
					}

					}
	
				}while((strcmp(Gender,sex)!=0) && (strcmp(Gender,sex1)!=0));
	}

	void Animal::AgeCheck(char* Ag)
	{
		int i=0;
			do
				{
					cin>>Ag;
					Age = atol(Ag);
					 i++;
					 if(i == 5)
					 cerr<<"\n\t\t\tPlease Enter a Correct Number\n\t\t\t      ";
					 continue;
				}while(Age < 1 || Age > 130);


	}

	void Address::ParishCheck(char* par)
	{
		
	char* tempPar [] = {"kingston","st catherine","st andrew","st elizabeth","clarendon","hanover","st mary","st ann","portland","trelawny","st james","mandeville","westmoreland","st thomas"};
	char* tempArea [] = {"public","private"};
	int i;
	bool nloop = true;
			do{
					fflush(stdout);
					fflush(stdout);
					cin.getline(par,25);
				fflush(stdout);
				for(i=0;i<14;i++)
					{
					
						 par[i] = tolower(par[i]);

						 if((strcmp(par,tempPar[i])!=0))
						 {
							 nloop = true;
						 }
						 else
						 {
							 nloop = false;
							 break;
						 }

					
					}

					  if(i==7 && nloop==true)
						{
						  i=0;

						}
				}while(nloop);


	}

	void Address::AreaCheck(char* areA)
	{

		char* tempArea [] = {"public","private"};
			int g,i=0;
			bool nloop = true;
		do{
					fflush(stdout);
					fflush(stdout);
					fflush(stdout);
				cin>>areA;
				fflush(stdout);
				g = strlen(areA);
			
				for(i=0;i<g;i++)
				{
					
					areA[i] = tolower(areA[i]);

					if((strcmp(areA,tempArea[i])!=0))
					 {
							 nloop = true;
						 }
						 else
						 {
							 nloop = false;
							 break;
						 }

					
				}

				if(i==7 && nloop==true)
					{
						  i=0;

					}
			}while(nloop);


	}
