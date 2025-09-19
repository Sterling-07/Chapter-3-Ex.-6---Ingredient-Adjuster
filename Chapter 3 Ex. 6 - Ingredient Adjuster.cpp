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
	double sugar = 1.5, butter = 1, flour = 2.75, cookie = 48, cookiea, cookien;

	cout << "How many cookies do you want to make? ";
	cin >> cookiea;

	cookien = cookiea / cookie;

	cout << "You will need the following ingredients in order to make " << cookiea << " cookies: \n";
	cout << sugar * cookien << " cups of sugar\n";
	cout << butter * cookien << " cups of butter\n";
	cout << flour * cookien << " cups of flour\n";

}


