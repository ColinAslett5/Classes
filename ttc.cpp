#include <iostream>

using namespace std;

void printboard(int board[][3]);

int main(){
  int board[3][3];
  printboard(board);
}
void printboard(int board[][3]){
  board[0][0] = 0;
  board[0][1] = 1;
  board[0][2] = 2;
  board[1][0] = 3;
  board[1][1] = 4;
  board[1][2] = 5;
  board[2][0] = 6;
  board[2][1] = 7;
  board[2][2] = 8;
  cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
  cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
  cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
  
}
