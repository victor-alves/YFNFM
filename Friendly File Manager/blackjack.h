#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

int calculateScore(vector<string> &cards);

// Print everyone's scores and decks
void printStatus(vector<string> &playerCards, vector<string> &dealerCards);

int blackjack();