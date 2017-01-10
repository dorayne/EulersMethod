/*
Euler's Method for calculating differential equations
To-Do:
	- Accept user input
	- Use the math library for functions? Set up to accept TI levels of input
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// declaring variables
	double x_n, y_n, y_prime, h, y_next, x_goal;
	int n = 0;
	// setting precision to 5 decimal places
	cout << fixed << showpoint << setprecision(5);
	// initializing initial values for x and y
	x_n = 0;
	y_n = 1;
	// initializing the differential equation in terms of y prime
	y_prime = x_n + y_n;
	// initializing h, the horizontal step, and the goal x value
	h = 0.1;
	x_goal = 0.4;
	// initializing the next y value
	y_next = y_n + h * y_prime;
	// heading
	cout << "   n  |   x_n   |   y_n   | y_prime | y_(n+1) = y_n + h * y_prime" << endl;
	cout << setw(3) << " " << n << "  | ";
	cout << setw(7) << x_n << " | ";
	cout << setw(7) << y_n << " | ";
	cout << setw(7) << y_prime << " | ";
	cout << setw(7) << y_next << endl;
	// while loop that does the actual calculations and output
	while (x_n <= (x_goal - h))
	{
		n++;
		x_n = x_n + h;
		y_n = y_next;
		y_prime = x_n + y_n;
		y_next = y_n + h * y_prime;
		cout << setw(3) << " " << n << "  | ";
		cout << setw(7) << x_n << " | ";
		cout << setw(7) << y_n << " | ";
		cout << setw(7) << y_prime << " | ";
		cout << setw(7) << y_next << endl;
	}
	cout << "The approximation of y(" << x_n << ") using Euler's Method is " << y_n << "." << endl;
	return 0;
}