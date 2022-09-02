#include <string>
#include<iostream>
#include"Person.h"
using namespace std;
int main(){
 Person a1(1000,"A");
 cout<<"name is"<<a1.getName()<<"salary is"<<a1.getSalary()<<endl;
  Person a2(2000,"B");
 cout<<"name is"<<a2.getName()<<"salary is"<<a2.getSalary()<<endl;
  Person a3(3000,"C");
 cout<<"name is"<<a3.getName()<<"salary is"<<a3.getSalary()<<endl;
   Person a4(4000,"D");
 cout<<"name is"<<a4.getName()<<"salary is"<<a4.getSalary()<<endl;
}
