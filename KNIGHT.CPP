class Knight : public Chess
{
public:
    Knight(int c, int i, int j)
    {
        color = c;
        index1 = i;
        index2 = j;
        setPieceType(3);
    }
    bool validateMove(Chess *board[8][8], int i, int j)
    {
        int poss1r = index1 + 1;
        int poss11c = index2 - 2;
        int poss12c = index2 + 2;

        int poss2r = index1 - 1;
        int poss21c = index2 - 2;
        int poss22c = index2 + 2;

        int poss3r = index1 + 2;
        int poss31c = index2 - 1;
        int poss32c = index2 + 1;

        int poss4r = index1 - 2;
        int poss41c = index2 - 1;
        int poss42c = index2 + 1;

        if (i < 0 || i > 7 || j < 0 || j > 7)
        {
            return false;
        }

        if (((i == poss1r) && (j == poss11c || j == poss12c)) || ((i == poss2r) && (j == poss21c || j == poss22c)) || ((i == poss3r) && (j == poss31c || j == poss32c)) || ((i == poss4r) && (j == poss41c || j == poss42c)))
        {
            if (board[i][j] == NULL || board[i][j]->getColor() != color)
            {
                movePiece(board, i, j);
            }
            else {
                return false;
            }
            return true;
        }
    }
};
