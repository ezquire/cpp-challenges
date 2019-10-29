#include <iostream>
#include <iomanip>
#include <vector>

class Board {
public:
  Board::Board();
  void print();
private:
  std::vector< std::vector<char> > board { {'-','-','-'},{'-','-','-'},{'-','-','-'} };

};

