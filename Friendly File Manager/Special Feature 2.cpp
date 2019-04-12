#include "Special Feature 2.h";
#include "blackjack.cpp"


void specialFeature2(string fileName) {
	ofstream executioner;
	if (blackjack() == 0) {

		executioner.open(fileName, ofstream::out | ofstream::trunc);
		executioner.close();
	}

}