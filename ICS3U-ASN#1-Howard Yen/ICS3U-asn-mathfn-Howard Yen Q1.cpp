/* Evaluating Expressions
Howard Yen
Nov 20, 2017
Create a program that evaluates the following expressions for x=-5, y=1, z=0.5
a) sin(y)[e^x - log(y)]
b) |sin(y) - cos(y)|
c) e^x - x^y
d) The square root of z plus the square root of y
*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //use namespace std to avoid typing std::

int main () //beginning of the program
{
	double x=-5, y=1, z=0.5; //declare what number x,y and z represent in this program
	const double e=2.718; //declare what "e" represent constantly

	cout << "The answer of sin(y)[e^x - log(y)] is " << sin(y)*(pow(e,x)-log(y))<<endl; //ask for the answer of the first question
	cout << "The answer of |sin(y) - cos(y)| is " << abs(sin(y)-cos(y))<<endl; //ask for the answer of the second question
	cout << "The answer of e^x - x^y is " << (pow(e,x)-pow(x,y))<<"\n"; //ask for the answer of the third question
	cout << "The answer of the square root of z plus the square root of y is " << sqrt(z)+sqrt(y)<<"\n"; //ask for the answer of the fourth question
	return(0); //end of the program
}

//sin()
//cos()
//tan()
//x^y ==> pow(x,y)
//square root ==> sqrt(x)
//log()
//|x| ==> abs(x)
