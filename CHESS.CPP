#include<bits/stdc++.h>
class Chess
{
protected:
	int color,index1,index2;
	int piecetype;
public:
	int getColor(){
		return color;	
	}
	void setPieceType(int i){
		piecetype=i;
	}
	int getPieceType(){
		return piecetype;
	}
	virtual bool validateMove(Chess * board[][8],int i,int j)=0;
	
void movePiece(Chess * board[8][8],int i,int j){
	if(board[i][j]!=NULL)delete(board[i][j]);
	board[i][j]=board[index1][index2];
	board[index1][index2]=NULL;
	index1=i;index2=j;
}
};
