#include<iostream>
#include<bits/stdc++.h>
#include"CHESS.CPP"
#include"KING.CPP"
#include"QUEEN.CPP"
#include"KNIGHT.CPP"
#include"ROOK.CPP"
#include"PAWN.CPP"
#include"BISHOP.CPP"
#include"PLACEPCS.CPP"
#include<stdlib.h>
#include"DISPLAYBOARD.CPP"
using namespace std;
int main(){
Chess * board[8][8];
for(int i=0;i<8;i++)
for(int j=0;j<8;j++)
board[i][j]=NULL;
placePieces(board);
displayBoard(board);
int i,j,k,l;
while(true){
	cout<<"enter indexes of piece to be moved  "<<flush;cin>>k>>l;
	if(board[k][l]==NULL){cout<<"invalid move"<<flush;continue;}
	cout<<"enter destination indexes "<<flush;cin>>i>>j;
	if(!board[k][l]->validateMove(board,i,j)){cout<<"move not posssible\n"<<flush;continue;}
	system("CLS");
	displayBoard(board);
}
return 0;
}
