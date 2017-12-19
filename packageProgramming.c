//======================================================================================
//Programmed by: Lissette Ramos
// Date of Completion: June 14, 2017
//Intention of Program: To use user input to determine the price for shipping a package
//=====================================================================================

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int miles;
	int weight;
	int price;
	double milesPricing;
	double totalPrice;
	
	printf("How many miles will this package be traveling? \n ");
	scanf("%d", &miles); //Stores number of miles a user will travel to a variable.

	printf("Nice! Now, what is your package's weight in pounds ?");
	scanf("%d", &weight); //Takes weight of package from user and stores it into the weight variable.


	if (weight <= 15) {

		price = 15;
	} //Stores 15 into price variable if weight is 15lbs or less


	if (weight > 15) {

		price = 15 + ((weight - 15) * .50);

	} //Adds 50 cents to the initial  15 pound price for every pound it is above 15.



		milesPricing = (miles / 500 + (miles % 500 != 0)) * 10; //Determines price based on miles.

		totalPrice = price + milesPricing;//Adds together weight and miling pricing and stores it into a variable.

		printf("Your price will be $%.2f \n", totalPrice); //Reveals said variable.
		system("pause");


	
}