#include "pch.h"
#include <cstdlib>
#include <fstream>
#include "../Friendly File Manager/menu.h"
using namespace std;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Feature1Test, filePermanentlyEncrypted)
{
	fstream testFile;
	string content;

	// Open the file and add sample text
	testFile.open("sample.txt");
	testFile << "Some sample text." << endl;
	testFile.close();

	// "Permanently encrypt" the file
	primaryFeature1("sample.txt");

	// Open and see if it worked!
	testFile.open("sample.txt");
	getline(cin, content);

	ASSERT_TRUE(content == randomString);
}

TEST(Feature2Test, fileDeleted) {
	fstream testFile;
	
	testFile.open("sample.txt");
	testFile << "What the darn-diddly-doodily did you just say about me, you little witcharooney? I�ll have you know I graduated top of my class at Springfield Bible College, and I�ve been involved in numerous secret mission trips in Capital City, and I have over 300 confirmed baptisms. I am trained in the Old Testament and I�m the top converter in the entire church mission group. You are nothing to me but just another heathen. I will cast your sins out with precision the likes of which has never been seen before in heaven, mark my diddily-iddilly words. You think you can get away with saying that blasphemy to me over the internet? Think again, friendarino. As we speak I am contacting my secret network of evangelists across Springfield and your IP is being traced by God right now so you better prepare for the storm, maggorino. The storm that wipes out the diddily little thing you call your life of sin. You�re going to Church, kiddily-widdily. Jesus can be anywhere, anytime, and he can turn you to the Gospel in over infinity ways, and that�s just with his bare hands. Not only am I extensively trained in preaching to nonbelievers, but I have access to the entire dang-diddily Bible collection of the Springfield Bible College and I will use it to its full extent to wipe your sins away off the face of the continent, you diddily-doo satan-worshipper. If yonly you could have known what holy retribution your little �clever� comment was about to bring down upon you from the Heavens, maybe you would have held your darn-diddily-fundgearoo tongue. But you couldn�t, you didn�t, and now you�re clean of all your sins, you widdillo-skiddily neighborino. I will sing hymns of praise all over you and you will drown in the love of Christ. You�re farn-foodily-flank-fiddily reborn, kiddo-diddily." << endl;
	testFile.close();
	
	ASSERT_TRUE(primaryFeature2("sample.txt") == 0);
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