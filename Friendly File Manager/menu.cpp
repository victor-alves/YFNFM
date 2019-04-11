#include "menu.h"


void menu() {
	fstream sacrificeFile;
	string fileName;
	bool fileSelected = false;
	string choice;

	cout << "Please select a file to proceed, with extension";
	cin >> fileName; 
	sacrificeFile.open(fileName);
	fileSelected = true;


	if (fileSelected) {
		cout << "Main Menu";
		cout << "    1. Encrypt the file";
		cout << "    2. Read and display the file";
		cout << "    3. Special feature 1";
		cout << "    4. Special feature 2";
		cin >> choice; //can't do switch with a string I found out
		if (choice == "1")
			primaryFeature1(sacrificeFile);
		else if (choice == "2")
			primaryFeature2(sacrificeFile);
		else if (choice == "3")
			specialFeature1(sacrificeFile);
		else if (choice == "4")
			specialFeature2();
		else
			cout << "Invalid input detected.";


		
	}

}