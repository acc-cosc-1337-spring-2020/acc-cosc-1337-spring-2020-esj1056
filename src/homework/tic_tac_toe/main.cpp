#include "tic_tac_toe.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	string choice1 ("");
	string choice2 ("");
	string player ("");
	int position{ 0 };
	TicTacToe game;
	do {
		cout << "Please choose to play as X or O: ";
		cin >> player;
		try {
			game.start_game(player);
		}
		catch (Error a){
			cout << a.get_error() << "\n";
		}
		do {
			cout << "Player " << game.get_player() << ", please choose a positon of 1-9: ";
			cin >> position;
			try {
				game.mark_board(position);
				cout << "Please press Y to mark a position for player 2, or anything else to start a new game: " << "\n";
				cin >> choice1;
			}
			catch(Error a){
				cout << a.get_error() << "\n";
			}
		} while (choice1 == "Y");
		cout << "Please press Y to begin a new game, or anything else to quit: ";
		cin >> choice2;
	} while (choice2 == "Y");
	return 0;
}