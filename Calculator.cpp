#include <iostream>
#include <cmath>

using namespace std;

int main() {

	cout << "Welcome to the Two Number C++ Calculator \n Let's get started! \n";
	
	// Declare variables used for calculator 

	double num1, num2;
	string operation;

	// User inputs 
	
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << "Operation listing:\n	Addition (+) \n	Subtraction (-) \n	Multplication (*) \n	Division (/) \n ";

	cout << "Enter desired operation [ + , - , * , / ]:  ";
	cin >> operation;

	// Conditions for operation 

	if (operation == "+") {
		
		cout << "Your result is: " << num1 + num2;
	}
	
	else if (operation == "-") {

		cout << "Your result is: " << num1 - num2;
	}

	else if (operation == "*") {

		cout << "Your result is: " << num1 * num2;
	}

	else if (operation == "/") {

		cout << "Your result is: " << num1 / num2;
	}

	else {
		cout << "I am sorry you have an: Invalid operation!";
	}

	return 0;
}