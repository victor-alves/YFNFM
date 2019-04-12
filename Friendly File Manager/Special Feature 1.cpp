#include "Special Feature 1.h"

//take file, return different file to be used (selected by user), then continue the menu with the new file
//delete provided file (the not new one) before function ends

string specialFeature1(const string fileName)
{
	string newFileName;

	// delete provided file
	const int result = std::remove(fileName.c_str());

	// get new file name
	cout << "Choose a new file:" << endl;
	cin >> newFileName;
	
	// return different file to be used
	return newFileName;
}