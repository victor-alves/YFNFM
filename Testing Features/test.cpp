#include "pch.h"
#include <cstdlib>
#include <fstream>
using namespace std;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Feature2Test, fileGoneOnRun) {
	fstream testFile;
	bool pass = false;
	testFile.open("sample.txt");
	testFile << "Some sample text" << endl;
	primaryFeature2(testFile);
	testFile.close();
	testFile.open("sample.txt");
	if (testFile.fail()) {
		pass = true;
	}
	ASSERT_TRUE(pass);
}

TEST(SpecialFeature1Test, fileDifferent) {
	fstream testFile;
	fstream testFile2;
	bool pass = false;
	string temp;
	testFile.open("sample.txt");
	testFile << "Some sample text exclusive to testFile" << endl;
	testFile2 = specialFeature1(testFile);
	getline(testFile2, temp);
	if (temp != "Some sample text exclusive to testFile") {
		pass = true;
	}
	ASSERT_TRUE(pass);
}