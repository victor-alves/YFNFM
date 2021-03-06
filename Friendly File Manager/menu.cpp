#include "menu.h"

void menu()
{
	string	fileName = "";
	int		choice = 0;
	
	cout << "\nPlease select a file\nwith extension:";
	cin >> fileName;
	
	while (choice != 5) 
	{
		cout << "Main Menu:" << endl
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
			cout << "Please select a file\nwith extension:";
			cin >> fileName;
			break;
			}	
		case 2:
			{
			int result = primaryFeature2(fileName);
			cout << "Please select a file\nwith extension:";
			cin >> fileName;
			break;
			}
		case 3:
			{
			fileName = specialFeature1(fileName);
			break;
			}
		case 4:
			{
			specialFeature2(fileName);
			cout << "Please select a file\nwith extension:";
			cin >> fileName;
			break;
			}
		case 5:
			{
			cout << "Have a wonderful day! :-)" << endl;
			break;
			}
		default:
			cout << "Invalid input detected." << endl;
			cout << "Please select a file\nwith extension:";
			cin >> fileName;
		}
	}

}