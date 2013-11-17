#include <iostream>
#include <string>


using namespace std;

#ifndef Address_H
#define Address_H

class Address
{
private:
	char Parish[25];
    char Area[10];
	char Street[40];

public:
	Address(){}
	Address(char parish,  char area, char street)
	{
		Parish[25] = parish;
		Area[10] = area;
		Street[40] = street;

	}
	void SetParish (char par){Parish[25] = par;}

	char GetParish (){return Parish[25];}

	void SetArea (char A){Area[10] = A;}

	char GetArea (){return Area[10];}

	void SetStreet(char str){Street[10] = str;}

	char GetStreet(){return Street[10];}

	void Locationinfo();
	void View();
	void ParishCheck(char*);
	void AreaCheck(char*);
	void StreetCheck(char*);
};
#endif