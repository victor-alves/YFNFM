#include "Primary Feature 2.h"

int primaryFeature2(const string fileName)
{
	fstream file;
	string	line;
	int		maxCount = 0,
			newCount = 0;
	
	file.open(fileName);

	// Get number of lines
	while (getline(file, line))
		maxCount++;

	// Reset stream
	file.clear();
	file.seekg(0, ios::beg);

	// Read half the file
	while (newCount < (maxCount / 2) + 1)
	{
		file >> line;
		cout << line;
		newCount++;
	}

	file.close();
	// Delete file
	const int result = std::remove(fileName.c_str());
	if (result == 0)
	{
		cout << "\nHang on... we're struggling to read from the file" << endl
			<< "..." << endl << "...." << endl << "....." << endl
			<< "Disaster strikes! The file is nowhere to be found!" << endl;
	}

	return result;
}
