#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	string choice1 ("");
	TicTacToeManager manager;
	do {
		string player("");
		int position{ 0 };
		TicTacToe game;
		bool winner;
		int x;
		int o;
		int t;
		while (!(player == "X" || player == ")"))
		{
			try {
				cout << "Please choose to play as X or O: ";
				cin >> player;
				game.start_game(player);
			}
			catch (Error a) {
				cout << a.get_error() << "\n";
			}
		}

		do {
			
			cin >> game;
			cout << game;
			winner = game.game_over();
			
			
		} while (winner == false);
		manager.save_game(game);
		cout << game;
		cout << "Player " << game.get_winner() << " is the winner!\n";
		manager.get_winner_total(x, o, t);
		cout << "\nPlease press Y to begin a new game, or anything else to quit: ";
		cin >> choice1;
	} while (choice1 == "Y");
	cout << manager;
	return 0;
}