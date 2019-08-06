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
	virtual void movePiece(Chess * board[8][8],int i,int j)=0;
};
