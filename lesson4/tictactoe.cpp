#include <iostream>
using namespace std;

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

    //return 0 in main --> stop the code/application
    return 0;
}