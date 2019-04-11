#include "menu.h"


void menu() {
	string		fileName = "";
	bool		fileSelected = false;
	int			choice = 0;

	cout << "Please select a file to proceed, with extension";
	cin >> fileName; 
	fileSelected = true;


	while (fileSelected) 
	{
		cout << "Main Menu" << endl
			<< "    1. Encrypt the file" << endl
			<< "    2. Read and display the file" << endl
			<< "    3. Special feature 1" << endl
			<< "    4. Special feature 2" << endl
			<< "    5. Exit" << endl;
		cin >> choice;
		
		switch(choice)
		{
		case 1:
			{
			primaryFeature1(fileName);
			break;
			}	
		case 2:
			{
			primaryFeature2(fileName);
			break;
			}
		case 3:
			{
			specialFeature1(fileName);
			break;
			}
		case 4:
			{
			specialFeature2(fileName);
			}
		case 5:
			{
			return;
			}
		default:
			cout << "Invalid input detected." << endl;
		}
	}

}