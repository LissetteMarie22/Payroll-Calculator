#include <stdio.h>
#include <stdlib.h>
main(void) {
	int number1; //First number the user enters.
	int number2; //Second number the user enters.
	int sum; // Will give the sum and product of number1 and number2
	int product; //Will provide product of the two numbers the user gives.

	printf("Give me two numbers, and I will give you the sum and product of them. Please enter your first number.\n"); //Explainnig this program, and asking for the first number.
	scanf("%d", &number1);//User gives their first number, and that number is assigned to the number1 variable.
	printf("Sweet, and what shall the second number be? \n");
	scanf("%d", &number2); //Second number is collected and assigned to number2.
	sum = number1 + number2; //Adds the first and second number and stores that total into a variable.
	product = number1 * number2; //Multiplies the two numbers the user gives and puts the product.
	printf("The sum is %d \n", sum); 
	printf("and the product is %d \n", product);
	//Sum or product is printed out.

system("pause");


}