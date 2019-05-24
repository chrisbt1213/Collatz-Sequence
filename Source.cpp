#include<iostream>
#include"Collatz.h"
using namespace std;

int main() {
	//declarations
	int userNum;
	string output = " ";
	Collatz* userCollatz = new Collatz();

	//get user input
	cout << "Enter an integer 100 or less: ";
	cin >> userNum;

	//output
	cout << "The number " << userCollatz->calcLongestCollatz(userNum) << " produces the longest Collatz sequence of " << userCollatz->numberOfTerms(userNum) << " terms." << endl;
    cout << "Here are those terms: " << endl;
	cout << userCollatz->calcLongestCollatz(userNum);
	userCollatz->displayCollatz(userNum);
	cout << endl;

	system("pause");
	return 0;
}