
class Bishop:public Chess{
public :
Bishop(int c,int i,int j){
color=c;
index1=i;
index2=j;
setPieceType(4);
}
bool validateMove(Chess * board[8][8],int i,int j){
if(i>7||i<0||j>7||j<0)return false;
if(abs(i-index1)!=abs(j-index2))return false;
int s1=(i-index1>0)?1:-1,s2=(j-index2>0)?1:-1;
int t1=index1+s1,t2=index2+s2;
for(t1=t1,t2=t2;t1>=0&&t2<=7&&t1<=7&&t2>=0;t1+=s1,t2+=s2){
    if(board[t1][t2]!=NULL&&t1!=i&&t2!=j)return false;
        if(board[t1][t2]==NULL&&t1==i&&t2==j){movePiece(board,i,j);return true;}
        if(board[t1][t2]!=NULL&&t2==j&&t1==i&&board[t1][t2]->getColor()!=color){movePiece(board,i,j);return true;}
}
return false;
}

};
