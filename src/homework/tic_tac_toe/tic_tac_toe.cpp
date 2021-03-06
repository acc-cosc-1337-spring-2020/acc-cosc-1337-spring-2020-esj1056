#include "tic_tac_toe.h"
//cpp

bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true) {
		set_winner();
		return true;
	}
	else if (check_board_full() == true) {
		winner = "C";
		return true;
	}
	return false;
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
	if (game_over() == false) {
		next_player();
	}
}

/*void TicTacToe::display_board() const 
{
	for (int i = 0; i < 9; i += 3) {
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}*/


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

bool TicTacToe::check_column_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X" || pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") {
		return true;
	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X" || pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") {
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X" || pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O") {
		return true;
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" || pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") {
		return true;
	}
	if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X" || pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") {
		return true;
	}
	if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X" || pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") {
		return true;
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" || pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") {
		return true;
	}
	if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X" || pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O") {
		return true;
	}
	return false;
}

void TicTacToe::set_winner()
{
	if (player == "X") {
		winner = "X";
	}
	else(winner = "O");
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& t)
{
	for (int i = 0; i < 9; i += 3) {
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "\n";
	}
	return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& t){

	try {
		int position;
		cout << "Player " << t.get_player() << ", please choose a positon of 1-9: ";
		in >> position;
		t.mark_board(position);
	}
	catch (Error a) {
			cout << a.get_error() << "\n";
	}
	
	return in;
}
