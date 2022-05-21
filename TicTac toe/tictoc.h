#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<char>> matrix(vector<vector<char>>, int);
vector<vector<char>> round(vector<vector<char>>, bool);
vector<vector<char>> swap(vector<vector<char>>, char, bool);
bool swapPlayer(int);
char whoWin(vector<vector<char>>);
bool winner(char, int, vector<vector<char>>);
void updateGrid(vector<vector<char>>);