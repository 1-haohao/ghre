#ifndef PLANE_H
#define PLANE_H

#include <iostream>
#include <string> 
#include "Person.h" 

using namespace std;

class Airplane{
public:
	Airplane(string callsign , Person thePilot , Person theCopilot);
	void setPilot(Person thePilot);
	Person getPilot();
	void setCopilot(Person theCoPilot);
	Person getCoPilot();
	void printDetails();
private:
	Person thePilot;
	Person theCopilot;
	string callsign;
};


#endif
