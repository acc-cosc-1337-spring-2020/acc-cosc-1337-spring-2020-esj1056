#include "tic_tac_toe.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	string choice1 ("");
	string player ("");
	int position{ 0 };
	TicTacToe game;
	bool winner;
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
				game.display_board();
				game.game_over();
				winner = game.game_over();
			}
			catch(Error a){
				cout << a.get_error() << "\n";
			}
		} while (winner == false);
		cout << "Player " << game.get_winner << " is the winner!";
		cout << "Please press Y to begin a new game, or anything else to quit: ";
		cin >> choice1;
	} while (choice1 == "Y");
	return 0;
}