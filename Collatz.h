#ifndef _COLLATZ
#define _COLLATZ
#include<string>
using namespace std;

class Collatz {
public:
	int calcLongestCollatz(int userNumPar);
	int numberOfTerms(int userNumPar);
	void displayCollatz(int userNumPar);

private:
	int startNumber, number, terms, answer;
	int saveTerms = 0;

};
#endif
