#include "tic_tac_toe.h"

//cpp

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O") {
		TicTacToe::player = first_player;
	}
	else {
		throw Error("Player must be X or O.");
	}
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position < 9) {
		throw Error("Position must be 1 to 9.");
	}
	if (player == "") {
		throw Error("Must start game first.")
	}
	next_player;
}

void TicTacToe::next_player()
{
	if (player = "X") {
		player = "O";
	}
	else {
		player = "X";
	}
}
