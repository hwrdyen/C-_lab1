/* Wite a program that use the cosine law to calculate the third side
	Howard Yen
	Nov 20, 2017
	Write a program that lets you enter two sides of a triangle and the contained angle,
	and that will use the cosine law to calculate the third side:
	If the sides are a,b and the angle is C, then the third side is squareroot(a^2 + b^2 - 2abcosC)
*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //use namespace std to avoid typing std::

int main () //beginning of the program
{
	double a, b, C; //declare variable for a, b, and C

	cout << "Please enter the first side of the triangle: "; //ask for a (first side of the triangle)
	cin >> a; //read in a (first side of the triangle)
	cout << "Please enter the second side of the triangle: "; //ask for b (second side of the triangle)
	cin >> b; //read in b (second side of the triangle)
	cout << "Please enter the contained angle: "; //ask for C (the contained angle)
	cin>> C; // read in C (the contained angle)
	cout << "The length of the third side is " << sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(C)) << "\n"; //calculate the length of the third side
	return(0); //end of the program
}

//cos()
//x^y ==> pow(x,y)
//square root ==> sqrt(x)
//input ==> cin>>(variable)
