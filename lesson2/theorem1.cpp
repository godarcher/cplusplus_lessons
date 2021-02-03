
//1: We need to include iostream to be able to work with files
#include <iostream>

//2: We always need to use namespace std
using namespace std;

//the int main is the so called main function, when running code it is called first.
int main()
{ 

    //////////////////////
    //LESSON 1: INTEGERS//
    //////////////////////

    //how to declare an empty int
    int my_int; 

    //how to declare an assigned int
    int my_int2 = 3;

    //how to manipulate the value of an int
    my_int = 3;
    my_int2 = my_int2 * 2;
    my_int += 3; //3 is added to my_int
    my_int++; //myint = myint + 1 (1 is added)

    //how to calculate with multiple integers
    int my_int3 = my_int * my_int2;

    //////////////////////
    //LESSON 2: BOOLEANS//
    //////////////////////

    //how to declare an assigned boolean
    bool my_bool = true;
    bool my_bool2 = false; 

    //how to manipulate the value of a boolean
    my_bool = false;

    //how to assign one boolean to another one
    my_bool2 = my_bool;

    /////////////////////
    //LESSON 3: STRINGS//
    /////////////////////

    //how to declare an assigned string
    string my_string = "hello world"; //note that text needs to be between " ", otherwise we will be given an error

    //how to overwrite string content
    my_string = "new content";

    



}
