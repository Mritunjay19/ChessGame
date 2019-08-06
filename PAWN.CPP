#include<bits/stdc++.h>
using namespace std;
class Pawn:public Chess{
public:
Pawn(int c,int i,int j){
color=c;
index1=i;
index2=j;
setPieceType(1);
}
bool validateMove(Chess * board[][8],int i,int j){
if(index1==0||index1==7)return false;
if(index2==j){
	int m=1,t=index1+color;
	if((index1==1&&color==1)||(index1==6&&color==-1))m=2;
	for(m=m;m>0;m--){
		if(board[t][index2]!=NULL)return false;
		if(t==i){movePiece(board,i,j);return true;}
		t=t+color;
	}
	return false;
}
else if(index1+color==i){
	if((index1==0&&j-1==index2)||(index1==7&&j+1==index2)||(index1!=0&&index1!=7||(index2=j+1||index2+1==j)))
	if(board[i][j]!=NULL&&board[i][j]->getColor()!=color){movePiece(board,i,j);return true;}
}
return false;
}
void movePiece(Chess * board[8][8],int i,int j){
	if(board[i][j]!=NULL)delete(board[i][j]);
	board[i][j]=board[index1][index2];
	board[index1][index2]=NULL;
	index1=i;index2=j;
}
};
