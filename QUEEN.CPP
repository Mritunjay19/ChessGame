
class Queen:public Chess{
public:
Queen(int c,int i,int j){
color=c;
index1=i;
index2=j;
setPieceType(5);
}
bool validateMove(Chess * board[8][8],int i,int j){
if(i>7||i<0||j>7||j<0)return false;
if(abs(i-index1)==abs(j-index2)){
int s1=(i-index1>0)?1:-1,s2=(j-index2>0)?1:-1;
int t1=index1+s1,t2=index2+s2;
for(t1=t1,t2=t2;t1>=0&&t2<=7&&t1<=7&&t2>=0;t1+=s1,t2+=s2){
    if(board[t1][t2]!=NULL&&t1!=i&&t2!=j)break;
        if(board[t1][t2]==NULL&&t1==i&&t2==j){movePiece(board,i,j);return true;}
        if(board[t1][t2]!=NULL&&t2==j&&t1==i&&board[t1][t2]->getColor()!=color){movePiece(board,i,j);return true;}
}
}
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
