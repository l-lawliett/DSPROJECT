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
					cin>>AnyString;
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
					cin>>AnyString;
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
					cin>>AnyString;
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

void Address::StringChecker(char* AnyString)
{
	int i =0, b;
	 bool nloop = true;
	
			do
				{
						fflush(stdout);
					cin>>AnyString;
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