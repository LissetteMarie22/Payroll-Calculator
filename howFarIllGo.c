//===========================
// Name : Lissette Ramos
// Date Created June 23, 2017
// Intent of Program: Tell someone how far they can travel based on how much money they have . 
//==========================
#include <stdio.h>
#include <stdlib.h>

main() {
	int averageMiles; 
	double gasPrice;
	double currentMoney;
	int carGallons; //gallons of gas the car has.
	int milesTraveled;
	int totalMiles;
	int stopForGas;
	
	printf("I will tell you how far you can go based on how much money you have currently, given your cars' mph average, and how much a gallon of gas costs for you. So first off, what is your cars' average MPG?");
	scanf("%d", &averageMiles); //Stores user's MPG of their car to a variable.

	printf("Nice! OK, how much do you need to pay for a gallon of gas where you live?");
	scanf("%lf", &gasPrice); //Stores the price for gas per gallon in a variable.

	printf("Cool, and how much money do you have now?");
	scanf("%lf", &currentMoney); //Stores user's current money into a variable. For this program, it is assumed this is the only money the user has access to, not stopping at any ATM or having any other method to gain more money.

	

	for (carGallons = 10; carGallons > 0; milesTraveled++) //Car is assumed to start off with 10 gallons. A variable is used to hold how many gallons the card has.
		if (milesTraveled = averageMiles) { //When miles the user has traveled reaches average miles per gallon delete a gallon from the gallon holding variable.
			carGallons--;
			totalMiles += milesTraveled; //Add the miles traveled to a seperate variable holding the total number of miles the user has traveled in the whole trip.
			milesTraveled = 0; //Returns the miles traveled variable to zero so that it can be used with future car gallons.
		
			if (carGallons = 0) 
			if (currentMoney >= gasPrice) 
				stopForGas++;
				carGallons++;
				//If the car has no more gallons, if the user has enough money to buy another gallon, another gallon will be purchased and this will count as a stop for gas, added to another variable.
	}

			printf("You were able to travel %d miles before running out of money." , totalMiles); //Reveals how many hours the user was able to travel.
			printf("You stopped to get gas %d times", stopForGas);//Reveals number of gas stops that were made.

			system("pause");

}