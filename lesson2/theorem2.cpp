
//1: We need to include iostream to be able to work with files
#include <iostream>

//2: We always need to use namespace std
using namespace std;

//the int main is the so called main function, when running code it is called first.
int main()
{ 
    ////////////////////////////////////////////
    //LESSON 1: complicated if/else statements//
    ////////////////////////////////////////////

    int my_int = 3;
    bool my_bool = true;

    //we can pair multiple conditions inside an if statement
    //this one && means and, which means both have to be true
    if (my_int == 3 && my_bool == true)
    {
        my_int++;
    }

    //this one || means or, which means one of them has to be true
    if (my_int == 3 || my_bool == true)
    {
        my_int++;
    }

    //we can pair these using mathematical precedence brackets ()
    int my_int2 = 2 * my_int;

    if ((my_int == 3 || my_bool == true) && (my_int2 == 6)) //do you understand this condition?
    {
        my_int++;
    }

    //coding do's and don'ts
    //do: write out algorithms on paper to understand what it is you want to do
    //do: add whitelines between pieces of code
    //do: comment what code does
    //don't: leave code unassigned
    //don't wrongly format your code, faulty intendation

    //arrays :)
    int grades[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

}