class Knight:public Chess{
public:
Knight(int c,int i,int j){
color=c;
index1=i;
index2=j;
setPieceType(3);
}
bool validateMove(Chess * board[8][8],int i,int j){

return false;
}
};
