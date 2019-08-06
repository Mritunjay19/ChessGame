#include<bits/stdc++.h>
using namespace std;


void pieceDisplay(int i){
	
				switch(i){
					case(1):cout<<"PWN  ";break;
					case(2):cout<<"ROK  ";break;
					case(3):cout<<"NGT  ";break;
					case(4):cout<<"BSP  ";break;
					case(5):cout<<"QEN  ";break;
					case(6):cout<<"KNG  ";break;
				}
}

void displayBoard(Chess * board[][8]){
	cout<<"   ";
	for(int i=0;i<8;i++)cout<<"  "<<i<<"     ";cout<<endl;
	for(int i=0;i<8;i++){
		cout<<i<<"  ";
		for(int j=0;j<8;j++){
			if(board[i][j]!=NULL){
				if(board[i][j]->getColor()==1){
					cout<<"W->";
					pieceDisplay(board[i][j]->getPieceType());
				}
				else {cout<<"B->";
				pieceDisplay(board[i][j]->getPieceType());
				}	
			
			}
			else cout<<"------  ";
	}cout<<endl;
	}

}

