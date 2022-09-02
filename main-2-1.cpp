#include <iostream>
#include <string> 
#include "Wagon.h"

using namespace std;


int main()
{
	Wagon wagon;
	Capybara* bara = new Capybara[5];
	wagon.emptyWagon();
	
	bara[0].setName( "A" );
	bara[0].setAge( 11 );
	bara[1].setName( "B" );
	bara[1].setAge( 21);
	bara[2].setName( "C" );
	bara[2].setAge( 31 );
	bara[3].setName( "D" );
	bara[3].setAge( 41 );
	bara[4].setName( "F" );
	bara[4].setAge( 51 );	
	
	for(int i=0 ; i< 5; i++){
		if( wagon.addCapybara( bara[i] ) == false ){
			cout << "Error!" << endl;
		}
	}
	
	wagon.printCapybaras();
	wagon.emptyWagon();

	delete [] bara;	
	
	return 0;
}



