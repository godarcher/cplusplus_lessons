#include <iostream>
using namespace std;

//using arrow keys
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 77
#define KEY_RIGHT 75

//we count positions starting from 0 --> position 0 contains an o, position 1 contains a 1, position
char board[10] = {'o',
                  '1', '2', '3',
                  '4', '5', '6',
                  '7', '8', '9'};

int check_won()
{
    //? This function checks if one of the two players has won the game
    //* it returns 1 if player x has won, 0 if there is a draw, and -1 if player y has won

    //? Winning possibilities
    //! 123, 456, 789
    //! 147, 258, 369
    //! 159, 357

    //? Drawing possibilities
    //123
    if (board[1] == board[2] && board[1] == board[3])
    {
        return 1;
    }

    //456
    else if (board[4] == board[5] && board[5] == board[6])
    {
        return 1;
    }

    //789
    else if (board[7] == board[8] && board[8] == board[9])
    {
        return 1;
    }

    //147
    else if (board[1] == board[4] && board[4] == board[7])
    {
        return 1;
    }

    //258
    else if (board[2] == board[5] && board[5] == board[8])
    {
        return 1;
    }

    //369
    else if (board[3] == board[6] && board[6] == board[9])
    {
        return 1;
    }

    //159
    else if (board[1] == board[5] && board[5] == board[9])
    {
        return 1;
    }

    //357
    else if (board[3] == board[5] && board[5] == board[7])
    {
        return 1;
    }

    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
             board[4] != '4' && board[5] != '5' && board[6] != '6' &&
             board[7] != '7' && board[8] != '8' && board[9] != '9')
    {
        return 0;
    }

    //game is still in progress
    else
    {
        return -1;
    }

    //TODO: 1 --> use arrows to select where to move, 2 --> create an ai to play against you (singleplayer)
}

void show_my_board()
{
    cout << endl;
    cout << "We are going to play a game of Tic Tac Toe" << endl;
    cout << "Player 1 uses X, Player 2 uses O" << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1] << "  "
         << "|"
         << "  " << board[2] << "  "
         << "|"
         << "  " << board[3] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << "-----|-----|-----" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[4] << "  "
         << "|"
         << "  " << board[5] << "  "
         << "|"
         << "  " << board[6] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << "-----|-----|-----" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[7] << "  "
         << "|"
         << "  " << board[8] << "  "
         << "|"
         << "  " << board[9] << "  " << endl;
    cout << "     |     |     " << endl;
}

int main()
{
    int player = 1, i, choice;

    char marking;

    do
    {
        show_my_board();
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", please enter a number: ";
        cin >> choice;

        marking = (player == 1) ? 'X' : 'O';

        if (choice == 1 && board[1] == '1')
        {
            board[1] = marking;
        }

        else if (choice == 2 && board[2] == '2')
        {
            board[2] = marking;
        }

        else if (choice == 3 && board[3] == '3')
        {
            board[3] = marking;
        }

        else if (choice == 4 && board[4] == '4')
        {
            board[4] = marking;
        }

        else if (choice == 5 && board[5] == '5')
        {
            board[5] = marking;
        }

        else if (choice == 6 && board[6] == '6')
        {
            board[6] = marking;
        }

        else if (choice == 7 && board[7] == '7')
        {
            board[7] = marking;
        }

        else if (choice == 8 && board[8] == '8')
        {
            board[8] = marking;
        }

        else if (choice = 9 && board[9] == '9')
        {
            board[9] = marking;
        }

        //only reached if input is not >= 1 and =< 9 (minimal 1, maximal 9)
        else
        {
            cout << "The move you made is invalid, please enter a number in range 1 till 9" << endl;
            player--;
            cin.ignore();
            cin.get();
        }

        i = check_won();
        player++;
    } while (i == -1);

    show_my_board();

    if (i == 1)
    {
        cout << "1Player" << --player << " has won the game ";
    }
    else
    {
        cout << "Game is a Draw";
    }

    cin.ignore();
    cin.get();

    //TODO: make an ai that plays against you (singleplayer)
    //* we want the ai to make the best move possible always

    //! case 1 --> we begin (make the first move)

    //! case 2 --> the ai can move first
    //* case 1 if the ai can win by making a move --> make that move
    //* case 2 if the ai can block a winning from the opposition --> make that move
    //* case 3 (move 1) if the ai goes first --> place its number on the middle spot   
    
    //? AI is o, player is x in those examples

    //move 1
    // 1 2 3
    // 4 o 6
    // 7 8 9

    //* as a player at this point we can do all moves but not move 5
    //* statisticly all moves now are equally as smart for the ai
    //? Random pick, the ai is going to make move 2

    // lets say the player does move 1, or move 3, or 4, 6, 7, 9 --> ai still makes move at 2
    // if the player moves at 2 or at 8 --> we move at 6

    //move 2
    // 1 o 3
    // x o 6
    // 7 8 9

    //* in this case 8 is a winning move for the ai, however the player is first
    //? if player does not play 8, play 8

    //! else if the player does not play 8
    //move 3
    // 1 o 3
    // 3 o 6
    // 7 x 9

    //move 2
    // 1 2 3
    // x o o
    // 7 8 9

    //* as long as 2 and 8 are free try to move 2
    //* else if 2 and 8 are not free try to move 3 and 7
    //* else if 3 and 7 are not free try to move 3 and 9

    //* in this case 4 is a winning move for the ai, however the player is first
    //? if player does not play 4, play 4

    //! else if the player does not play 8
    //move 2
    // 1 2 3
    // x o o
    // 7 8 9


    //return 0 in main --> stop the code/application
    return 0;
