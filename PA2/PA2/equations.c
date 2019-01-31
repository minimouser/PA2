/*
 Formulas are stored here

*/

#include "equations.h"

//First formula (Newton's second law)
float newtonSecond(float mass, float acceleration) {
	float force = 0.0; //set variable

	force = mass * acceleration;
	return force;
}

//second formula (Volume of a cylinder)
float cylinderVolume(float radius, float height){
	float volume_cylinder = 0.0; //set variable

	volume_cylinder = PI * (radius * radius) * height;
	return volume_cylinder;
}

//third formula (Character Encoding)
char charEncode(char plaintext) {
	char shifted;//set variables

	shifted = (plaintext - 'A') + 'a' - 5;
	return shifted;
}

//fourth formula (Distance between 2 points)
float distancePoints(int x1, int y1, int x2, int y2) {
	float distance = 0.0; //creates variables

	distance = (float)sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	return distance;
}

//fifth formula (tangent)
float tangent(float theta) {
	float tanTheta = 0.0;

	tanTheta = (float)sin(theta) / (float)cos(theta);
	return tanTheta;
}

//sixth formula (Total resistance of resistors in paralell)
float resistance(int r1, int r2, int r3) {
	float total_resistance = 0.0; //initialize variables

	total_resistance = (float)1 / ((float)1 / r1 + (float)1 / r2 + (float)1 / r3);
	return total_resistance;
}

//seventh formula (y = (2 / 3) - y + z * x / (a % 2) + PI )
float formula(int a, int x, float y, int z) {

	y = (float)(((float)2 / 3) - y + z * x / (a % 2) + PI);
	return y;
}