
class King : public Chess
{
public:
    King(int c, int i, int j)
    {
        color = c;
        index1 = i;
        index2 = j;
        setPieceType(6);
    }
    bool validateMove(Chess *board[8][8], int i, int j)
    {

        int poss1r = index1 + 1;
        int poss11c = index2 - 1;
        int poss12c = index2 + 1;

        int poss2r = index1 - 1;
        int poss21c = index2 - 1;
        int poss22c = index2 + 1;

        int poss3r = index1;
        int poss31c = index2 - 1;
        int poss32c = index2 + 1;

        int poss41r = index1 + 1;
        int poss42r = index1 - 1;
        int poss4c = index2;

        if (i < 0 || i > 7 || j < 0 || j > 7)
        {
            return false;
        }
        if (((i == poss1r) && (j == poss11c || j == poss12c)) || ((i == poss2r) && (j == poss21c || j == poss22c)) || ((i == poss3r) && (j == poss31c || j == poss32c)) || ((j == poss4r) && (i == poss41r || i == poss42r)))
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
