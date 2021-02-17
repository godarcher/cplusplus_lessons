//* dependencies
#include <iostream>
using namespace std;

int main()
{

    //this is empty

    //assignment 1 --> create an integer called my_int with an initial value of 3.
    // if the integer is 3, add 1 to the integer.
    int my_int = 3;

    if (my_int == 3)
    {
        my_int++;
    }

    //* 100 percent correct

    //assignment 2 --> create a string called dogname with an initial value of daniel, create an int called dognumber with an initial value of 1.
    // if the dogname is petra the dognumber becomes 7

    string dogname = "daniel";
    int dognumber = 1;

    if (dogname == "petra")
    {
        dognumber = 7;
    }

    //* 90 percent correct

    //assignment 3 --> create an integer called hoursinday with initial value 24, create a string time with no initial value.
    // if hoursinday is 24, then time is 00:00, else if hoursinday is 12 time is 12:00

    int hoursinday = 24;
    string time;

    if (hoursinday == 24)
    {
        time = "00:00";
    }
    else if (hoursinday == 12)
    {
        time = "12:00";
    }

    //assignment 4 --> create an integer called hour with initial value 0, create a string displaytime with no initial value, and a boolean hour_over with initial value false.
    //set hour_over to true, if hour_over is true, increment hour by 1,

    int hour = 0;
    string displaytime;
    bool hour_over = false;

    hour_over = true;

    if (hour_over == true)
    {
        hour++;
    }

    //? first you need to assign a variable with a type (bool hour_over = false;)
    //? after this we can freely manipulate the variable, the computer remembers the type

    //assignment 5 --> initiate an integer called counter with initial value 0, use a for loop to increment this counter 10 times by 1 (++ 10 times)

    int counter = 0;

    for (int i = 0; i < 10; i++)
    {
        //?the code in here runs 10 times because 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9 are all smaller then 10
        counter++;
    }

    //for loop steps
    //1 declare an integer inside the for loop (int i = 0;)
    //2 (condition) i < 10
    //3 (incrementer) i++

    // assignment 6 --> initiate an integer called hoursofday with initial value 0, use a for loop to increment this counter so that it can show all hours of the day, it ends at 24

    int hoursofday = 0;

    for (int i = 0; i < 24; i++)
    {
        hoursofday++;
    }

    // assignment 7 --> lets say we have some grades, create an bool badgrade with initial value false, create a bool goodgrade with initial value true,
    // create an integer called badgrades with initial value 0, create an integer called goodgrades with initial value 0,
    // create a for loop that runs 30 times, if badgrade is true, increment badgrades by 1, else if goodgrade is true, increment goodgrades by 1.

    bool badgrade = false;
    bool goodgrade = true;

    int badgrades = 0;
    int goodgrades = 0;

    for (int i = 0; i < 30; i++)
    {
        if (badgrade == true)
        {
            badgrades++;
        }
        else if (goodgrade == true)
        {
            goodgrades++;
        }
    }

    //assignment 8 --> create an array of type integer with 10 values, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

    int whatever[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //* perfectly fine

    //assignment 9 --> use a for loop to iterate over all elements of whatever

    for (int i = 0; i < 10; i++)
    {
        //this is empty for this assignment
    }

    //*

    //assignment 10 --> if the number in whatever is insufficient (5 or lower) print to terminal "This is insufficient"

    int whatever[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //whatever[0] --> 1
    //whatever[3] --> 4

    //first do whatever[0] (1) then do whatever[1] (2) then do whatever

    for (int i = 0; i < 10; i++)
    {
        if (whatever[i] <= 5)
        {
            cout << "This is insufficient\n";
        }
    }

    //lets say i have 500 classmates
    string classmates[500] = {};

    //! size(classmates) --> amount of elements in arary

    for (int i = 0; i < size(classmates); i++)
    {
        classmates[i] = "name";
    }

    //TODO homework --> practice with the combination of arrays and for loops, practice with functions
}
