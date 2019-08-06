
class Rook:public Chess{
public:
Rook(int c,int i,int j){
color=c;
index1=i;
index2=j;
setPieceType(2);
}
bool validateMove(Chess * board[8][8],int i,int j){
if(index1!=i&&index2!=j)return false;
if(index1==i){
	int s=(j-index2>0)?1:-1;
    int t=index2+s;
    for(t=t;t<8&&t>=0;t=t+s){
        if(board[i][t]!=NULL&&t!=j)return false;
        if(board[i][t]==NULL&&t==j){movePiece(board,i,j);return true;}
        if(board[i][t]!=NULL&&t==j&&board[i][t]->getColor()!=color){movePiece(board,i,j);return true;}
    }
}
else if(index2==j){
    int s=(i-index1>0)?1:-1;
    int t=index1+s;
    for(t=t;t>0&&t<8;t=t+s){
        if(board[t][j]!=NULL&&t!=i)return false;
        if(board[t][j]==NULL&&t==i){movePiece(board,i,j);return true;}
        if(board[t][j]!=NULL&&t==i&&board[t][j]->getColor()!=color){movePiece(board,i,j);return true;}
    }
}
return false;
}
};
