#include<iostream>
#include<bits/stdc++.h>
#include"CHESS.cpp"
#include"KING.cpp"
#include"QUEEN.cpp"
#include"KNIGHT.cpp"
#include"ROOK.cpp"
#include"PAWN.cpp"
#include"BISHOP.cpp"
#include<conio.h>
#include"PLACEPCS.CPP"
#include<stdlib.h>
using namespace std;
int main(){
Chess * board[8][8];
for(int i=0;i<8;i++)
for(int j=0;j<8;j++)
board[i][j]=NULL;
placePieces(board);
getch();
system("CLS");
cout<<"sbdk";
getch();
getch();

return 0;
}
