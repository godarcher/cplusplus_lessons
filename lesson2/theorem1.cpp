
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

    //however strings also have some interesting math like properties, see for yourself:
    //mystring now holds --> "new content even more content", we used addition on a string
    my_string = my_string + " even more content";

    //we can do the above operation more elegant like this:
    my_string += " even more content";
    
    //we can also use strings to calculate strings
    string my_string2 = "hello";
    string my_string3 = "sam";
    my_string = my_string2 + " " + my_string3; //this holds "hello sam", note that we also added a space to the string

    /////////////////////
    //LESSON 4: IF/ELSE//
    /////////////////////

    //if else statements are crucial in any coding language, they allow too something based upon a condition
    //so if (condition is true) we will do a, else (so if condition is not true) we will do b

    //the if syntax is: 
    //if (condition_here) 
    //{
    // result_of_condition_here
    //}

    if (my_bool == false) //note that here for equal we use "=="
    {
        my_bool = true;
    }
    else //note that this only runs if my bool is not false
    {
        my_bool = false;
    }

    //we can also use else if for multiple if conditions
    if (my_int == 1) 
    {
        my_bool = true;
    }
    else if (my_int == 2) //note that this only runs if my int is not equal to 1
    {
        my_bool = false;
    }
    else //note that this only runs if my int is not equal to 1 and not equal to 2
    {
        my_int++;
    }

    //note that we can use more parentheses: >, <, >=, <=
    if (my_int < 5)
    {
        my_int++;
    }

    if (my_int >= 3)
    {
        my_int++;
    }




}
