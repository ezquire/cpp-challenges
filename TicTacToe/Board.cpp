#include "Board.hpp"

Board() {}

void Board::print() {
  for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 2; ++j) {
      std::cout << board[i][j] << '|';
    }
    std::cout << board[i][2] << std::endl;
  }
}
