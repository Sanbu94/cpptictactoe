#include <iostream>
using namespace std;

char board[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
void gameboard();
int win();


int main()
{
	int player = 1, i, selection;
	char symbol;

	do 
	{
		gameboard();
if (player % 2 ==1)
player = 1;
else
player = 2;		
	
cout << "Player " << player << " make your move!! ENTER A NUMBER BETWEEN 1-9!: ";
cin>>selection;


if (player == 1)
{
	symbol = 'X';
}
else {
	symbol = 'O';
}
if (selection == 1 && board[1] == '1')
board [1] = symbol;
else if (selection == 2 && board [2] == '2')
board [2] = symbol;
else if (selection == 3 && board [3] == '3')
board [3] = symbol;
else if (selection == 4 && board [4] == '4')
board [4] = symbol;
else if (selection == 5 && board [5] == '5')
board [5] = symbol;
else if (selection == 6 && board [6] == '6')
board [6] = symbol;
else if (selection == 7 && board [7] == '7')
board [7] = symbol;
else if (selection == 8 && board [8] == '8')
board [8] = symbol;
else if (selection == 9 && board [9] == '9')
board [9] = symbol;
else
{
	cout<<" Invalid input, please enter a number 1-9";
	player --;
	cin.ignore();
	cin.get();

}
i = win();
player ++;
}
while (i == -1);
gameboard();
if (i == 1)
cout<<"Player "<<--player << " wins!!";
else
cout<<" Game is a draw!";
cin.ignore();
cin.get();
return 0;
}

void gameboard()
{
	cout << "    |    |    " << endl;
cout << "  " << board[1] << " | " << board[2] << "  | " << board[3] << endl;

cout << "----|----|----" << endl;
cout << "    |    |    " << endl;

cout << "  " << board[4] << " | " << board[5] << "  | " << board[6] << endl;

cout << "----|----|----" << endl;
cout << "    |    |    " << endl;

cout << "  " << board[7] << " | " << board[8] << "  | " << board[9] << endl;

}





