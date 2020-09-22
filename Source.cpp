#include <iostream>
using namespace std;

// To add:
// Random light at beginning
// User select first light location
// Detect when all lights are off

int main()
{
	char board[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int y = 0; y < 5; y++)
		{
			board[i][y] = '0';
			cout << board[i][y] << " ";
		}
		cout << endl;
	}

	while (true)
	{
		int col = 0, row = 0;
		cout << endl;
		cout << "Enter column to press: ";
		cin >> col;
		cout << "Enter row to press: ";
		cin >> row;
		col -= 1; row -= 1;

		// set selected light
		if (board[row][col] == '0')
			board[row][col] = 'X';
		else
			board[row][col] = '0';
		// go through rows
		if (row - 1 >= 0) {
			if (board[row-1][col] == '0')
				board[row-1][col] = 'X';
			else
				board[row-1][col] = '0';
		}
		
		if (row + 1 <= 5) {
			if (board[row+1][col] == '0')
				board[row+1][col] = 'X';
			else
				board[row+1][col] = '0';
		}
		
		// go through cols
		if (col - 1 >= 0)
		{
			if (board[row][col-1] == '0')
				board[row][col-1] = 'X';
			else
				board[row][col-1] = '0';
		}
		
		if (col + 1 <= 5)
		{
			if (board[row][col+1] == '0')
				board[row][col+1] = 'X';
			else
				board[row][col+1] = '0';
		}
		

		// print board
		for (int i = 0; i < 5; i++)
		{
			for (int y = 0; y < 5; y++)
			{
				
				cout << board[i][y] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}