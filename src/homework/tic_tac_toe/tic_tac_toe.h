//h
#include <string>
#include <vector>
#include<iostream>
using std::string; using std::vector;

class Error {
public:
	Error(string msg) : message{ msg } {}
	string get_error()const { return message; }
private:
	string message;
};

class TicTacToe {
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player()const { return player; }
	void display_board() const;
private:
	bool check_board_full();
	void clear_board();
	void next_player();
	string player;
	vector<string> pegs{ 9, " " };
};