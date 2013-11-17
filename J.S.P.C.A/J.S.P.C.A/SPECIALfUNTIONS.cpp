#include "Animal.h"



void Animal:: StringChecker(char* AnyString)
{
	int i =0, b;
	 bool nloop = true;
	
	 do
				{
					
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