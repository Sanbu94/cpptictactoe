#include <iostream>
#include <string>
using namespace std;

int board[3][3] = {{ 1, 2, 3}, {4, 5, 6}, {7, 8, 9 }};
int row;
int column;
char symbol = 'X';





int main() 
{

	string player1;
	string player2;

	cout << "Player 1 enter your name!: \n";
	getline(cin, player1);

	cout << "Player 2 enter your name!: \n";
	getline(cin, player2);

	
	cout << player1 << "(X)" <<  player2 << " (0)\n\n";

	cout << "    |    |    " << endl;
	cout << "  " << board[0][0] << " | " << board[0][1] << "  | " << board[0][2] << endl;

	cout << "----|----|----" << endl;
	cout << "    |    |    " << endl;

	cout << "  " << board[1][0] << " | " << board[1][1] << "  | " << board[1][2] << endl;

	cout << "----|----|----" << endl;
	cout << "    |    |    " << endl;

	cout << "  " << board[2][0] << " | " << board[2][1] << "  | " << board[2][2] << endl;


	int move;

	if(symbol=='X')
	{
		cout<<player1<<" make your move, please enter a number!";
		cin>>move;
	}
	if(symbol=='O')
	{
		cout<<player2<<" make your move, please enter a number!";
		cin>>move;
	}

	if (move == 1)
	{
		row = 0;
		column = 0;
	}
	if (move== 2)
	{
		row = 0;
		column = 1;
	}
	if (move== 3)
	{
		row = 0;
		column = 2;
	}
	if (move== 4)
	{
		row = 1;
		column = 0;
	}
	if (move== 5)
	{
		row = 1;
		column = 1;
	}
	if (move== 6)
	{
		row = 1;
		column = 2;
	}
	if (move== 7)
	{
		row = 2;
		column = 0;
	}
	if (move== 8)
	{
		row = 2;
		column = 1;
	}
	if (move== 9)
	{
		row = 2;
		column = 2;
	}

	else
	{
	cout << "\nYou cant place your symbol there, try again! ";
	}
}

		



