#include <stdio.h>
#include <stdlib.h>
include

main(void) {
	int hours; //hours worked.
	double rate; //Hourly rate
	double regular; //Regular pay
	double overtime; //how many hours the user worked overtime.
	double gross; //Gross salary
	double federal; //Federal tax of 27%
	double medical; //medical insurance, 14%
	double net; // Pay after federal tax and medical insurance is taken out.

	printf("Now, how many hours do you work a week?");
	scanf("%d", &hours); //Stores how many hours someone worked in a variable.

	printf( "Please tell me how much you make per hour.");
	scanf("%lf", &rate); //Stores how much a person makes per hour in a variable.

	printf("Houlry Rate:%.2lf \n ", rate);
	printf("Hours Worked: %d  \n", hours);
	//Prints out the hours and rates the user put in.
	regular = rate * hours; //Multiples rate by hours and stores the product in a variable.

	printf("Regular Pay:%.2lf \n ", regular); //Prints the regular pay with two decimal places.

	overtime = (hours - 40) * (rate * 1.5); //Applies a 1.5 rate to overtime hours.

	printf("Overtime Pay:%.2lf \n ", overtime); //Shows overtime pay.

	gross = regular + overtime; //Adds regular and overtime pay to come up with gross pay.

	printf("Gross Pay:%.2lf \n ", gross); //Shows gross pay to the user.

	federal = gross * .27; //Calculates federal tax of gross money.

	printf("Federal Tax:%.2lf  \n", federal); //PRints out federal tax.

	medical = gross * .14; //Calculates medical tax.

	printf("Medical Insurance :%.2lf \n ", medical); //Reveals medical tax.

	net = gross - (federal + medical);//Takes out federal and medical tax.

	printf("Net Pay:%.2lf \n ", net); //Prints out net pay.

	system("pause");

}

