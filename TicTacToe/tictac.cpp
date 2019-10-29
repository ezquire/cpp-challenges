#include <iostream>
#include <vector>
#include <string>

class Board {
public:
  Board();
  void print();
  bool gameover() { return _gameover; }
private:
  std::vector<char> _board;
  bool _gameover;
};

int main() {
  
  Board* board = new Board();

  std::cout << "Welcome to TicTacToe - the AI edition\n";
  std::cout << "Here is the current board:\n";
  board->print();
  std::cout << "To make a move:\nEnter TL for 'Top Left'\n";
  std::cout << "Enter TM for 'Top Middle'\nEnter TR for 'Top Right'\n";
  std::cout << "Enter CL for 'Center Left'\nEnter CM for 'Center Middle'\n";
  std::cout << "Enter CR for 'Center Right'\nEnter BL for 'Bottom Left'\n";
  std::cout << "Enter BM for 'Bottom Middle'\nEnter BR for 'Bottom Right'\n";
  std::string choice;
  while(!board->gameover()) {
    std::cin >> choice;
    if(choice == "TL") {
      std::cout << "Top Left" << std::endl;
      exit(0);
    }
  }
  
  delete board;
  return 0;
}

Board::Board(): _board(9, '-'), _gameover(0) {}

void Board::print() {
  for(int i = 0; i < 9; ++i) {
    if(i == 2 || i == 5 || i == 8)
      std::cout << _board[i] << std::endl;
    else
      std::cout << _board[i] << '|';
  }
}
