
#include <iostream>
#include <string>
#include "Airplane.h"
#include "Person.h"

using namespace std;

Airplane :: Airplane(string callsign , Person thePilot , Person theCopilot){
	this->thePilot = thePilot ;
	this->theCopilot = theCopilot;
	this->callsign = callsign;
}
	
void Airplane :: setPilot(Person thePilot){
	this->thePilot = thePilot;
}

Person Airplane :: getPilot(){
	return this -> thePilot;
}

void Airplane :: setCopilot(Person theCoPilot){
	this->theCopilot = theCoPilot;
}

Person Airplane :: getCoPilot(){
	return this -> theCopilot;
}

void Airplane :: printDetails(){
	cout << this->callsign << endl;
	cout << this->thePilot.getName() << endl;
	cout << this->theCopilot.getName() << endl;
}
