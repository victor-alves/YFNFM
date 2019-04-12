#pragma once
#include <fstream>
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

//take file, return different file to be used (selected by user), then continue the menu with the new file
//delete provided file (the not new one) before function ends
string specialFeature1(const string fileName);