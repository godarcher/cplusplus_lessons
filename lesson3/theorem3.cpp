
//1: We need to include iostream to be able to cin cout
//2: We need fstream to read and write files
//3: We need string to use getline
#include <iostream>
#include <fstream>
#include <string>

//2: We always need to use namespace std
using namespace std;

//the int main is the so called main function, when running code it is called first.
int main()
{ 

///////////////////////
//Rewinding for loops//
///////////////////////

//First lets start talking about the for loop again
//the for loop can be used for two purposes
for (int i = 0; i < 10; i++)
{
    string example = "reached";
}

//for loop steps
//1 declare an integer inside the for loop (int i = 0;)
//2 (condition) i < 10
//3 (incrementer) i++

//what does this say?
int i = 0;
if (i < 10)
{
    string example = "reached";
}
i++;

//then 
int i = 1;
if (i < 10)
{
    string example = "reached";
}
i++;

for (int i = 0; i < 10; i++)
{

}

for (int i = 0; i < 20; i++)
{
    cout << i;
}
//i < 10 holds for, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//so the for loop will be ran 10 times, we can use i inside the for loop as a counter

////////////////////
//rewinding arrays//
////////////////////

//arrays :)
int grades[10000];
int grades[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//lets say i have 500 classmates
string classmates[500] = {};

for (int i = 0; i < size(classmates); i++)
{
    classmates[i] = "name";
}


string dognames[20] = {};

//handy tips for intendation
//tab for to the right (well known)
//shift tab for reverse (not well known)

////////////////////////////////
//reading and writing to files//
////////////////////////////////

//for reading and writing we use ofstreams (write) and ifstreams (read)

//note the #include <fstream> at the top of this

//WRITING
ofstream myFile_Handler;

// File Open
myFile_Handler.open("File_1.txt");

// Write to the file
myFile_Handler << "This is a sample test File. " << endl;
myFile_Handler << "This is the second line of the file. " << endl;

// File Close
myFile_Handler.close();

//READING
string line;

ifstream myfile ("example.txt");

if (myfile.is_open())
{
    while ( getline (myfile,line) )
    {
        cout << line << '\n';
    }
    myfile.close();
}

else cout << "Unable to open file"; 
}

//normal array
int myNum[3] = {10, 20, 30};

//written differently
int myNum[3] = 
{
    10, 
    20, 
    30
};

//this array use one direction of filling
//in real life we have x, y ,z 
//in math we mostly have x and y
//in arrays we can also use two dimensions instead of one

int x[3][4] = 
{
    {0,1,2,3}, 
    {4,5,6,7}, 
    {8,9,10,11}
};

//written out further
int x[3][4] = 
{
    {
    0,
    1,
    2,
    3
    }, 
    {4,5,6,7}, 
    {8,9,10,11}
};

//make a chess game
char chessboard[8][8] =
{
    {'T','H','B','K','Q','B','H','T'},
    {'P','P','P','P','P','P','P','P'},
    {'E','E','E','E','E','E','E','E'},
    {'E','E','E','E','E','E','E','E'},
    {'E','E','E','E','E','E','E','E'},
    {'E','E','E','E','E','E','E','E'},
    {'P','P','P','P','P','P','P','P'},
    {'T','H','B','K','Q','B','H','T'}
};

//galgje