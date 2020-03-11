#include "tic_tac_toe.h"
//cpp

bool TicTacToe::game_over()
{
	return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O") {
		TicTacToe::player = first_player;
	}
	else {
		throw Error("Player must be X or O.");
	}

	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9) {
		throw Error("Position must be 1 to 9.");
	}
	else if (player == "") {
		throw Error("Must start game first.");
	}

	pegs[position - 1] = player;
		next_player();
}

void TicTacToe::display_board() const 
{
	for (int i = 0; i < 9; i += 3) {
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}


void TicTacToe::next_player()
{
	if (player == "X") {
		player = "O";
	}
	else {
		player = "X";
	}
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i) {
		if (pegs[i] == " ") {
			return false;
		}
	}

	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs) {
		peg = " ";
	}
}
