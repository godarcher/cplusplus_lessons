
//! First we will start talking about functions

//? numbers x and y are my input, i want to calculate x + y;

int my_int = 3;

//grades --> got a list containing 50 grades
//goal add 1 to every grade
//grade = grade + 1

//* int addition (int x)
// the first int is the output type
// the second int is the input type

//! function
int addition(int x)
{
    //? This function returns the input + 1
    //* This function takes an input an arbitrary integer x
    return x + 1;
}

//! variables
int my_int = 3;
int my_int = addition(my_int); //this variable calls a function
//returns 4

//! string function
string mystring = "hello ";
string mystring2 = "Sam";

string outputstring(string x, string y)
{
    return x + y;
}

string mystring3 = outputstring(mystring, mystring2);
//* output would be "hello Sam"

//! void function

void print_title(string title)
{
    cout << "A very good movie is: " + title << endl;
}

/*
! A function is a block of code which only runs when it is called.

! You can pass data, known as parameters, into a function.

! Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

! C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.

! To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ():

*/

void myFunction()
{
    // code to be executed
}

// Create a function
void myFunction()
{
    cout << "I just got executed!";
}
