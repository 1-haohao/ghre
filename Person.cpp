#include "Person.h"
#include <iostream>
#include<string>

using namespace std;

// implementation of the default Panda constructor
Person::Person(){};
Person::Person(int mySalary, string myName){
	name=myName;
    salary=mySalary;
}
void Person::setName(string myName){
    name=myName;  
}
  string Person::getName()
  {
    return name;
  };
  void Person::setSalary(int mySalary){
      salary=mySalary;
  }
  int Person::getSalary(){
      return salary;
  };
 Person::~Person(){};