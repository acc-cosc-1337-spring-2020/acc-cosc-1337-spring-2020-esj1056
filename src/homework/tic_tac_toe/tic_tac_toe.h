//h
#include <string>
#include <vector>
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
	void start_game(string first_player);
	void mark_board(int position);
	string get_player()const { return next_player; }
private:
	void next_player();
	string player;
};