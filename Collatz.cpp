#include "Collatz.h"
#include <iostream>
#include <string>
using namespace std;

int Collatz::calcLongestCollatz(int userNumPar) {
	int startNumber, number, terms, answer;
	int saveTerms = 0;

	for (startNumber = 2; startNumber < userNumPar; startNumber++) {
		terms = 1;
		number = startNumber;
		while (number > 1) {
			while (number % 2 == 0)
			{
				number /= 2;
				terms++;
			}
			if (number > 1)
			{
				number = (number * 3) + 1;
				terms++;
			}
		}
		if (terms > saveTerms)
		{
			saveTerms = terms;
			answer = startNumber;
		}
	}
	return answer;
}

void Collatz::displayCollatz(int userNumPar) {

	int userNum = userNumPar;

	struct collatzNode {
		int item;
		collatzNode *link;
	};

	collatzNode *head = new collatzNode;
	head->item = 0;
	head->link = nullptr;

	collatzNode *nextCollatzNode = new collatzNode;
	nextCollatzNode = head;

	int newUserNum = calcLongestCollatz(userNum);

	while (newUserNum != 1) {
		nextCollatzNode->link = new collatzNode;
		nextCollatzNode = nextCollatzNode->link;
		nextCollatzNode->link = nullptr;

		if (newUserNum % 2 != 0) {
			newUserNum = newUserNum * 3 + 1;
			nextCollatzNode->item = newUserNum;
		}

		else {
			newUserNum = newUserNum /= 2;
			nextCollatzNode->item = newUserNum;
		}
	}

	nextCollatzNode = head->link;

	while (nextCollatzNode != nullptr) {
		cout << "->" << nextCollatzNode->item;
		nextCollatzNode = nextCollatzNode->link;
	}
}


int Collatz::numberOfTerms(int userNumPar) {
	int startNumber, number, terms, answer;
	int saveTerms = 0;

	for (startNumber = 2; startNumber < userNumPar; startNumber++) {
		terms = 1;
		number = startNumber;
		while (number > 1) {
			while (number % 2 == 0)
			{
				number /= 2;
				terms++;
			}
			if (number > 1)
			{
				number = (number * 3) + 1;
				terms++;
			}
		}
		if (terms > saveTerms)
		{
			saveTerms = terms;
			answer = startNumber;
		}
	}
	return saveTerms;
}