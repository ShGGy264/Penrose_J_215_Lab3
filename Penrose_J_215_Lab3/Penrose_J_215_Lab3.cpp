// Penrose_J_215_Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	// The rest of this function is an exercise to the reader
	cout << "Please enter the second value:";
	cin >> B;
}
void firstChoice(float A, float B) {
	cout << "You chose Addition, I will add the first value to the second value." << endl;
	cout << A << "+" << B << "=" << (A + B) << endl;
}
void secondChoice(float A, float B) {
	cout << "You chose Subtraction, I will subtract the second value from the first." << endl;
	cout << A << "-" << B << "=" << (A - B) << endl;
}
void thirdChoice(float A, float B) {
	cout << "You chose Multiplication, I will multiply the values together." << endl;
	cout << A << "*" << B << "=" << (A * B) << endl;
}
void fourthChoice(float A, float B) {
	cout << "You chose Divison, I will divide the first value by the second." << endl;
	cout << A << "/" << B << "=" << (A / B) << endl;
}
// This covers a case elp cover a case where "choice" was not 1,2,3 or 4. 
void noChoice() {
	cout << "It seems what you entered was not one of the four choices. Next time simply type the number next to the oporation you wish to do." << endl;
	cout << "Example: 1 is for Addition." << endl;
}
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 4) {
		fourthChoice(A, B);
	}
	if (choice < 1) {
		noChoice();
	}
	if (choice > 4) {
		noChoice();
	}
	
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
