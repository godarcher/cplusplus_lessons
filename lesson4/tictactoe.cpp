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
    //* 123, 456, 789
    //! 147, 258, 369
    //! 159, 357
    // if 1 == 2 == 3 then won

    //* Drawing possibilities

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

    //TODO: 147, 258, 369, 159, 357

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
    cout << "Please choose a number (1-9) to make a move" << endl;

    //TODO: Make code
    //Subdivide and conquer
    //* 1 --> i need to display a board on the screen containing places where i as player can place an x or an o

    //! We are going to make tic-tac-toe!
    //? But where do i start??? tic tac toe exists of several elements
    //? I need to subdivide the task --> make tic tac toe, into smaller subtasks

    //* sub problems
    //? we need two players
    //? tell us who has won
    //? check if there are 3 x's or 3 o's in a row to determine which party has won
    //? implement a function to place a move
    //? check wether the given location does not already contain a piece

    //* sub solutions
    //? we need two players --> we use symbols o and x, and let the players move after each other
    //? tell us who has won --> check after each move if there are 3 x's or 3 o's in a row to determine which party has won --> then print (x's have won or o's have won)
    //? show a table to the players --> make a very basic table being empty at the start
    //? change the table every time we place a thing --> if move is made, adjust table with move
    //? implement a function to place a move --> if button pressed --> place move at position specified
    //? check wether the given location does not already contain a piece --> does it contain x or o --> return already occurpied --> otherwise call function above

    show_my_board();
}