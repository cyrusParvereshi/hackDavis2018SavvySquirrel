#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	double finalAmount;
	double principal;
	double interestRate;
	double numTimesCompounded = 4;
	int yrsInvested; 

	cout << "Hello! Welcome to the Compound Interest Simulator!\n";
	cout << "Gain more nuts by planting nuts in the ground to create trees that give you more nuts!\n";
	cout << "How many nuts would you like to invest?\n";
	cin >> principal;
	cout << "Choose an interest plan. The higher the rate of interest the more nuts you will get\n"
	cout << "but the longer you will have to put your money away\n";

	cin << interestRate;
    interestRate = interestRate/100.0; // because kids will assume they have to enter in a percentage
	if(interestRate <= 0.04){
		yrsInvested = 5;
	}
	else if((interestRate > 0.04) && (interestRate <= 0.06)){
       yrsInvested = 10;
	}
	else if ((interestRate > 0.06 && interestRate <= 0.1)){
		yrsInvested = 15;
	}
	else if((interestRate > 0.1) && interestRate <= 0.15){
		yrsInvested = 20;
	}
	else{
		yrsInvested = 30; // lmao the squirrel will prob die before they get anything, 
		                  //this is to punish the kids that like too much risk ;)
	}
    //calculation of final amount of interest
    finalAmount = principal * pow(( 1 + (interestRate/numTimesCompounded)), (interestRate * yrsInvested));
    cout << "Your final number amount of nuts after all that time is: "<< finalAmount<<endl;
    cout << "Congratulations!\n";
    return 0;
}