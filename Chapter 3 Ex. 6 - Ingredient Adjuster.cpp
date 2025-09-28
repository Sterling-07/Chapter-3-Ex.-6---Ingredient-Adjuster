/* File Name: Ingredient Adjuster
* Programmer: Philip Rodgers
* Date: September 2025
* Requirements: Create a program that asks the user how many cookies they want to make and adjusts the amount of ingredients involved to create the necessary 
amount of cookies wanted. 
*/

#include <iostream>
using namespace std;

int main()
{
	//Create necessary variables
	double sugar = 1.5, butter = 1, flour = 2.75, cookie = 48, cookiea, cookien;

	//Ask the user how many cookies they want to make and save this value
	cout << "How many cookies do you want to make? ";
	cin >> cookiea;

	//Equation used to calculate how many cookies will be needed which will be used to calculate cups of each ingredient  
	cookien = cookiea / cookie;

	//Calculate and display the necessary number of cups needed to make however many cookies
	cout << "You will need the following ingredients in order to make " << cookiea << " cookies: \n";
	cout << sugar * cookien << " cups of sugar\n";
	cout << butter * cookien << " cups of butter\n";
	cout << flour * cookien << " cups of flour\n";

}


