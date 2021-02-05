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
//i < 10 holds for, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//so the for loop will be ran 10 times, we can use i inside the for loop as a counter

////////////////////
//rewinding arrays//
////////////////////

//arrays :)
int grades[10000];
int grades[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//lets say i have 500 classmates
string classmates[500] = {};

for (int i = 0; i++; i < size(classmates))
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
    ifstream myFile_Handler;
    string myLine;

    // File Open in the Read Mode
    myFile_Handler.open("File_1.txt");

    if(myFile_Handler.is_open())
    {
        // Keep reading the file
        while(getline(myFile_Handler, myLine))
        {
            // print the line on the standard output
            cout << myLine << endl;
        }
    // File Close
    myFile_Handler.close();
    }
    else
    {
        cout << "Unable to open the file!";
    }
    return 0;
}