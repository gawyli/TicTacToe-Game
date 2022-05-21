#include <iostream>
#include <vector>
#include "tictoc.h"

using namespace std;


int main()
{
	int whichRound = 0;
	bool over = false;
	vector<vector<char>> grid
	{
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};
	
	while (!over)
	{
		system("cls");
		grid = matrix(grid, whichRound);
		char who = whoWin(grid);
		over = winner(who, whichRound, grid);
		whichRound++;
	}
	

	return 0;
}