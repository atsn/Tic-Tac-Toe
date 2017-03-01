// Tic-Tac-Toe
// Plays the game of tic-tac-toe against a human opponent
// This code is incomplete.  Functions have been declared but not defined.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// global constants
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

//function prototypes
void instructions();
char askYesNo(string question);
//int askNumber(string question, int high, int low = 0);
//char humanPiece();
//char opponent(char piece);
//void displayBoard(const vector<char>& board);
//char winner(const vector<char>& board);
//bool isLegal(const vector<char>& board, int move);
//int humanMove(const vector<char>& board, char human);
//int computerMove(vector<char> board, char computer);
//void announceWinner(char winner, char computer, char human);

// main function
int main()
{
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY);
    
    instructions();
	askYesNo("Are you an idiot");
    /*char human = humanPiece();
    char computer = opponent(human);
    char turn = X;
    displayBoard(board);
    
    while (winner(board) == NO_ONE)
    {
        if (turn == human)
        {
            move = humanMove(board, human);
            board[move] = human;
        }
        else
        {
            move = computerMove(board, computer);
            board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);
    }
    
    announceWinner(winner(board), computer, human);
   */
    return 0;
}


void instructions()
{
	cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n--where human brain is pit against silicon processor\n\nMake your move known by entering a number, 0-8. The number corresponts to the desired bord position, as illustrated: \n\n\t0 | 1 | 2\n\t---------\n\n\t3 | 4 | 5\n\t---------\n\n\t6 | 7 | 8\n\nPrepare yourself, human. The battle is about to begin.\n";
}

char askYesNo(string Question)
{
	char input = '0';
	while (input != 'y' && input != 'n' && input != 'Y' && input != 'N')
	{
		cout << "\n"<<Question << "\nPlease enter Y for yes and N for no\n";
		cin >> input;
		cin.ignore();
	}

	return  tolower(input);
}
