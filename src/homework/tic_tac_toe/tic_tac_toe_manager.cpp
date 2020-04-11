#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
	
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	/*if (winner == "X") {
		x_win++;
	}
	else if (winner == "O") {
		o_win++;
	}
	else (winner == "C") {
		ties++;
	}*/
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
	for (auto games : manager.games) {
		out << "X wins: " << manager.x_win << "\n";
		out << "O wins: " << manager.o_win << "\n";
		out << "Ties: " << manager.ties << "\n";
	}
	return out;
}
