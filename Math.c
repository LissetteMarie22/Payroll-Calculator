#include <stdio.h>
#include <stdlib.h>
main(void) {
	int number1; //First number the user enters.
	int number2; //Second number the user enters.
	int sum; // Will give the sum and product of number1 and number2
	int product; //Will provide product of the two numbers the user gives.
	int triple; //The result of cubing the second number.
	int remainder; //The remainder of dividing the two given numbers.
	int multipleStepFormula; //The result of adding the two given numbers together, multiplying it by the first given number, dividing by the second number.


	printf("Give me two numbers, and I will give you the sum and product of them. Please enter your first number.\n"); //Explainnig this program, and asking for the first number.
	scanf("%d", &number1);//User gives their first number, and that number is assigned to the number1 variable.
	printf("Sweet, and what shall the second number be? \n");
	scanf("%d", &number2); //Second number is collected and assigned to number2.
	sum = number1 + number2; //Adds the first and second number and stores that total into a variable.
	product = number1 * number2; //Multiplies the two numbers the user gives and puts the product.
	printf("The sum is %d \n", sum); 
	printf("and the product is %d \n", product);
	//Sum or product is printed out.
		triple = number2 * number2 * number2; //Multiples the second digit three times to cube that number.

	remainder = number1 % number2; //Returns the remainder of the first number divided by the second number.
	multipleStepFormula = (number1 + number2) * number1 /number2; //Multiplies the sum of the first and second given number, and multiples it by the quotient of the first given number and the second number.


	printf("Your numbers multiplied together give you %d \n", products);

	printf("Now the cube of the second number you gave is %d \n", triple);

	printf("If you were to divide your two numbers together your "
		"remainder would be %d\n", remainder);

	printf("Now we'll get really crazy,if you were to add your two numbers, "
		"multiply them by the first number you gave and divide by the second"
		"number you gave, you would get %d\n", multipleStepFormula);

	system("pause");
	

	

system("pause");


}