#include "tictoc.h"

vector<vector<char>> matrix(vector<vector<char>> grid, int whichRound)
{
	cout << "Weclome !" << endl;
	cout << "You are playing TicToc GAME made by gawyli" << endl;
	cout << "I hope you will enjoy the game - good luck!" << endl;
	cout << endl; 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "| ";
			cout << grid[i][j] << " | ";
		}
		cout << endl;
		cout << "-----------------" << endl;

	} 
	bool whichRoundpass = swapPlayer(whichRound);
	vector<vector<char>> newGird = round(grid, whichRoundpass);
	return newGird;
}

vector<vector<char>> round(vector<vector<char>> grid, bool whichRoundPass)
{
	char choice;
	bool player1 = whichRoundPass;


	if (player1)
	{
		cout << "P1 ( O ) - Select number: ";
		cin >> choice;
	}
	else if (!player1)
	{
		cout << "P2 ( X ) - Select number: ";
		cin >> choice;
	}

	vector<vector<char>> newGird = swap(grid, choice, player1);
	return newGird;
}

vector<vector<char>> swap(vector<vector<char>> grid, char choice, bool player1)
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[i][j] == choice && player1 && choice != 'O')
			{
				grid[i][j] = 'O';
			}
			else if (grid[i][j] == choice && !player1 && choice != 'X')
			{
				grid[i][j] = 'X';
			}
			
		}
	}
	return grid;
}

bool swapPlayer(int whichRound)
{
	bool player1 = true;

	if (whichRound % 2 != 0)
	{
		player1 = false;
	}

	return player1;
}

char whoWin(vector<vector<char>> grid)
{
	
	if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X')
		return 'X';
	if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X')
		return 'X';
	if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X')
		return 'X';

	// horizontal
	if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X')
		return 'X';
	if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X')
		return 'X';
	if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X')
		return 'X';

	// cross
	if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
		return 'X';
	if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X')
		return 'X';

	// Player O
	//vertical
	if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O')
		return 'O';
	if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O')
		return 'O';
	if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O')
		return 'O';

	// horizontal
	if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O')
		return 'O';
	if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O')
		return 'O';
	if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O')
		return 'O';

	// cross
	if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
		return 'O';
	if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O')
		return 'O';

	return 0;
}

void updateGrid(vector<vector<char>> grid)
{
	system("cls");
	cout << "Weclome !" << endl;
	cout << "You are playing TicToc GAME made by gawyli" << endl;
	cout << "I hope you will enjoy the game - good luck!" << endl;
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "| ";
			cout << grid[i][j] << " | ";
		}
		cout << endl;
		cout << "-----------------" << endl;

	}
}

bool winner(char who, int whichRound, vector<vector<char>> grid)
{
	bool over = false;


	if (who == 'O')
	{
		updateGrid(grid);
		cout << endl;
		cout << "Winner is Player 1!";
		over = true;
	}
	else if (who == 'X')
	{
		updateGrid(grid);
		cout << endl;
		cout << "Winner is Player 2!";
		over = true;
	}
	else if (whichRound == 9)
	{
		updateGrid(grid);
		cout << endl;
		cout << "Nobody win!";
		over = true;
	}

	return over;
}