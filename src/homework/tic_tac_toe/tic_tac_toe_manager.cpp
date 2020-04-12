#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
	cout << "X has won: " << x_win;
	cout << "O has won: " << o_win;
	cout << "Number of ties: " << ties;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X") {
		x_win++;
	}
	else if (winner == "O") {
		o_win++;
	}
	else {
		ties++;
	}
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
	out << "Here are all the games played: \n";
	for (auto game : manager.games) {
		out << "\n";
		out << game;
		string a = game.get_winner();
		out << "\n The winner was: " << a << "\n";
	}
	return out;
}
