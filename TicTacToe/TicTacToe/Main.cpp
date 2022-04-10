#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class TicTacToe
{
public:
    char mat[3][3] = { '1','2','3','4','5','6','7','8','9' };
    char player = 'X';
    int n;
    void clear()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat[i][j];
            }
        }
        player = 'X';
        n = 0;
    }
 
    void draw()
    {
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "   " << mat[i][j] << "   ";
            }
            cout << endl;
        }
    }
 
    void input()
    {
        int a;
       
        cout << "   It's " << player << " Turn !\n   Press Any Number Where You want To Mark: ";
        cin >> a;
        cout << "\n";
        
        if (a == 1)
        {
            if (mat[0][0] != 'X' && mat[0][0] != 'O')
            {
                mat[0][0] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
        
        if (a == 2)
        {
            if (mat[0][1] != 'X' && mat[0][1] != 'O')
            {
                mat[0][1] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
        
        if (a == 3)
        {
            if (mat[0][2] != 'X' && mat[0][2] != 'O')
            {
                mat[0][2] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
        
        if (a == 4)
        {
            if (mat[1][0] != 'X' && mat[1][0] != 'O')
            {
                mat[1][0] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
        
        if (a == 5)
        {
            if (mat[1][1] != 'X' && mat[1][1] != 'O')
            {
                mat[1][1] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }
        }
        

        if (a == 6)
        {
            if (mat[1][2] != 'X' && mat[1][2] != 'O')
            {
                mat[1][2] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
        
        if (a == 7)
        {
            if (mat[2][0] != 'X' && mat[2][0] != 'O')
            {
                mat[2][0] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
    
        if (a == 8)
        {
            if (mat[2][1] != 'X' && mat[2][1] != 'O')
            {
                mat[2][1] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
     
        if (a == 9)
        {
            if (mat[2][2] != 'X' && mat[2][2] != 'O')
            {
                mat[2][2] = player;
            }
            else
            {
                cout << "Try Again!\n";
                input();
            }

        }
    }
 
    void player2()
    {
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    char win()
    {
        if (mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X')
            return 'X';

        if (mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X')
            return 'X';

        if (mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X')
            return 'X';

        if (mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X')
            return 'X';

        if (mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X')
            return 'X';

        if (mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X')
            return 'X';

        if (mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X')
            return 'X';

        if (mat[2][0] == 'X' && mat[1][1] == 'X' && mat[0][2] == 'X')
            return 'X';

        if (mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O')
            return 'O';

        if (mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O')
            return 'O';

        if (mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O')
            return 'O';

        if (mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O')
            return 'O';

        if (mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O')
            return 'O';

        if (mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O')
            return 'O';

        if (mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O')
            return 'O';

        if (mat[2][0] == 'O' && mat[1][1] == 'O' && mat[0][2] == 'O')
            return 'O';

    }

   
};


int main()
{
    TicTacToe play;
    cout << "Welcome! Let's play a game!\n\n";
    int n = 0;
        play.clear();
        play.draw();
        while (1)
        {
            n++;
            play.input();
            play.draw();
            if (play.win() == 'X')
            {
                cout << "Player 1 Won!\n" << endl;
                break;
            }
            else if (play.win() == 'O')
            {
                cout << "Player 2 Won!\n" << endl;
                break;
            }
            else if (play.win() && n == 9)
            {
                cout << "Draw!\n" << endl;
                break;
            }
            play.player2();
        }
}