/*
	Programming Assignment 2
	Name: Bailey Wolber
	Date: 1/28/2019
	Description: Same project as PA1 but this time using functions and multiple source files

*/

#include "equations.h"
int main(void) {

	//calls newtons second law
	float mass = 0.0, acceleration = 0.0, force = 0.0;

	printf("Please enter the mass and acceleration for Newtons second law both as floating point values: ");
	scanf_s("%f%f", &mass, &acceleration);//prompt and get mass and acceleration values

	force = newtonSecond(mass, acceleration);

	printf("Newton's Second Law: force = mass * acceleration = %0.01f", force);//prints the force value

	/************************************************************************************************************************/

	//calls cylinder volume
	float radius = 0.0, height = 0.0, volume_cylinder = 0.0; //set variables

	printf("\n\nPlease enter the radius and height both as floating point values: ");
	scanf_s("%f%f", &radius, &height);//prompt and get radius and height values

	volume_cylinder = cylinderVolume(radius, height);

	printf("Volume of any cylinder is: V = PI * radius^2 * height = %0.01f", volume_cylinder);//calculates and prints volume

	/************************************************************************************************************************/

	//calls character encoder
	char plaintext = '\0', shifted;//set variables

	printf("\n\nPlease enter a single character: ");
	scanf_s(" %c", &plaintext); //prompt for a character

	shifted = charEncode(plaintext);
	printf("Your shifted character is: %c", shifted);//calculates and prints shifted character

	/************************************************************************************************************************/

	//calls distance between 2 points
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	float distance = 0.0;

	printf("\n\n Please enter 2 coordinates as integers (x1 y1 x2 y2): ");
	scanf_s("%d%d%d%d", &x1, &y1, &x2, &y2); //prompts for all 4 digits of the coordinates

	distance = distancePoints(x1,y1,x2,y2);
	printf("The distance between the 2 inputed points is: %0.01f units", distance); //calculates and prints the distance between the points

	/************************************************************************************************************************/

	//calculates tangent
	float theta = 0.0, tanTheta = 0.0; //creates variables

	printf("\n\n Please enter a value for Theta: ");
	scanf_s("%f", &theta); //prompts for the value of theta
	tanTheta = tangent(theta);

	printf("Tan(Theta) is: %0.01f", tanTheta); //calculates and prints value of theta

	/************************************************************************************************************************/


	//calculates resistance
	int r1 = 0, r2 = 0, r3 = 0;
	float total_resistance = 0.0; //initialize variables

	printf("\n\nPlease enter 3 resistor values (R1 R2 R3): ");
	scanf_s("%d%d%d", &r1, &r2, &r3); //prompt for 3 resistor values
	total_resistance = resistance(r1,r2,r3);

	printf("The value of the three resistors in parallel is: %f", total_resistance); //calculates total resistanc eof resistors in paralell

	/************************************************************************************************************************/

	//calclulates formula
	int a = 0, x = 0, z = 0;
	float y = 0.0; //initialize variables

	printf("\n\nPlease enter values as integers (a x y z): ");
	scanf_s("%d%d%d%d", &a, &x, &y, &z); //prompts user for variables
	y = formula(a,x,y,z);

	printf("The solution to y = (2 / 3) - y + z * x / (a % 2) + PI is: %0.01f", y); //calculates and prints solution
	return 0; //indicates success
}