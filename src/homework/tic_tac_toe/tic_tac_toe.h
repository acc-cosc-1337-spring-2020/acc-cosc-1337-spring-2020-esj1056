//h
#include <string>
#include <vector>
#include<iostream>
#ifndef ERROR_H
#define ERROR_H
using std::string; using std::vector;

class Error {
public:
	Error(string msg) : message{ msg } {}
	string get_error()const { return message; }
private:
	string message;
};
#endif
#ifndef TICTACTOE_H
#define TICTACTOE_H
class TicTacToe {
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player()const { return player; }
	//void display_board() const;
	string get_winner()const { return winner; }

	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe& t);
private:
	bool check_board_full();
	void clear_board();
	void next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	string player;
	string winner;
	vector<string> pegs{ 9, " " };
};
#endif //TICTACTOE_H