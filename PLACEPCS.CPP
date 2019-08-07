void placePieces(Chess * board[][8])
{
for(int i=0;i<8;i++)
{
board[1][i]=new Pawn(1,1,i);
board[6][i]=new Pawn(-1,6,i);
}
board[0][0]=new Rook(1,0,0);
board[0][7]=new Rook(1,0,7);
board[7][0]=new Rook(-1,7,0);
board[7][7]=new Rook(-1,7,7);
board[0][1]=new Knight(1,0,1);
board[0][6]=new Knight(1,0,6);
board[7][1]=new Knight(-1,7,1);
board[7][6]=new Knight(-1,7,6);
board[0][2]=new Bishop(1,0,2);
board[0][5]=new Bishop(1,0,5);
board[7][2]=new Bishop(-1,7,2);
board[7][5]=new Bishop(-1,7,5);
board[0][3]=new King(1,0,3);
board[0][4]=new Queen(1,0,4);
board[7][3]=new Queen(-1,7,3);
board[7][4]=new King(-1,7,4);
}
