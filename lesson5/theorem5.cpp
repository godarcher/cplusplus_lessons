//our dependencies
#include <iostream>
using namespace std;

//our main
int main()
{

    //! PART 1: Type Definitions
    //* So lets say we are making an appliation and the application that keeps track of the time in hours minutes and seconds
    //* We know that time is a variable, we can save inside an integer (integer time = 0 or 1 or 2 etc till 24)
    //* we could use a typedef to make the usage of time more easy to understand and use, we do this as follows:

    typedef int time;
    //? The above code declares time to be an alias of int
    //variabletime is the same as variabletype  int

    typedef string output_time;
    //variable outputtime is the same as variabletype string

    //* We are making some kind of a clock
    //use the time type definition to more clearly showcase how hours minutes and seconds work as integers
    time hours = 0;
    time minutes = 0;
    time seconds = 0;

    output_time output = "";

    //* USE CASES
    //if we are making for example a clock, all integers we use will be used for time related things,
    //therefore we can rename type int to type time for clearer things
    //The only use case is when a variable type (bool,int,string,etc) is only used for a specific purpose (in here that is time)

    //! PART 2: Enum
    //an enum (short for enumeration), is like a combination between numeric values and some definition
    enum season
    {
        spring,
        summer,
        autumn,
        winter
    };
    //* elements of enum are spring, summer, autumn and winter
    //? But all those elements have an index (spring is 0, summer is 1, autumn is 2, winter is 3)

    //EXAMPLE
    enum week
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    week today; //today can only hold one of the seven options above
    today = Wednesday;

    cout << "Day " << today + 1;
    //this will return {Day 4}

    return 0;

    //! PART 3:  Structures

    //a structure which in programming is shown by struct {structname} { }
    struct Point
    {
        //in 2D a point has two coordinates, an x coordinate and an y coordinate
        int x = 0;
        int y = 0;
    }; //in structures you need to add a ; after the last closing curly bracket

    struct Point p1 = {0, 1}; //we created a structure with x = 0, and y = 1

    //coolblue has a magazin filled with products
    //a product has a unique id (which is an integer)
    //a product has a name (which is a string)
    //a product has a price (which is a double)
    //a product has a quantity (which is an int), quantity is the amount in stock of this product.
    struct Product
    {
        int id = 0;
        string name = "";
        double prize;
        int quantity;
    };

    //now lets say wants to add a new product to their database
    struct Product frikandel = {84, "frikandel", 2.0, 10000};
    struct Product kroket = {85, "kroket", 2.0, 8800};

    //a local frikandellenseller is selling frikandellen and kroketten.
    struct Snack
    {
        int id = 0;
        string snackname = "";
        double snackprize;
        int quantity;
        double priceat_othershop;
        int soldthisweek;
    };

    //lets say we get a big list of
    struct Snack KitKat = {90, "KitKat", 0.85, 5000, 1.0, 990};

    cout << KitKat.snackprize << endl;
    //can you make and give it self thought values for the above things

    //* Adele
    //* 19
    //* 2008
    //* 1
    //* Daydreamer
    //* pop,debut album
    //* 3:40
    //* England

    //artist
    //track number on cd
    //year of release
    //cd number
    //track name
    //genre
    //length of song
    //nation song was made in

    struct Song
    {
        string artist;
        int trackNumber;
        int year;
        int CDnumber;
        string trackName;
        string genre;
        string songLength;
        string Nation;
    };

    struct Song mysong = {"Adele", 19, 2008, 1, "Daydreamer", "pop debut album", "3:40", "England"};

    struct Song songs[300];

    struct Track
    {
        string artist;  // name of artist
        string cd;      // cd title
        int year;       // year of appearance (if known)
        int track;      // track number
        string title;   // track title
        string tags;    // tags
        string time;    // playing time
        string country; // main countr(y/ies) of artist
    };

    struct Track tracks[300];

    //we have a file with 300 songs like the example below
    for (int i = 0; i < 300; i++)
    {
        tracks[i].artist = line1
                               tracks[i]
                                   .cd = line2
        //etc
    }

    //this will result into this:
    vector<Track> testDB = { {"Adele", "19", 2008, 1, "Daydreamer", "pop,debut album", {3, 40}, "England"},
                             {"Adele", "19", 2008, 10, "My same", "pop,debut album", {3, 15}, "England"},
                             {"Adele", "19", 2008, 11, "Tired", "pop,debut album", {4, 18}, "England"},
                             {"Adele", "19", 2008, 12, "Hometown glory", "pop,debut album", {4, 31}, "England"},
                             {"Adele", "19", 2008, 2, "Best for last", "pop,debut album", {4, 18}, "England"},
                             {"Adele", "19", 2008, 3, "Chasing pavements", "pop,debut album", {3, 30}, "England"},
                             {"Adele", "19", 2008, 4, "Cold shoulder", "pop,debut album", {3, 11}, "England"},
                             {"Adele", "19", 2008, 5, "Crazy for you", "pop,debut album", {3, 28}, "England"},
                             {"Adele", "19", 2008, 6, "Melt my heart to stone", "pop,debut album", {3, 23}, "England"},
                             {"Adele", "19", 2008, 7, "First love", "pop,debut album", {3, 10}, "England"},
                             {"Adele", "19", 2008, 8, "Right as rain", "pop,debut album", {3, 17}, "England"},
                             {"Adele", "19", 2008, 9, "Make you feel my love", "pop,debut album", {3, 32}, "England"},
                             {"Adele", "21", 2011, 1, "Rolling in the deep", "pop", {3, 49}, "England"},
                             {"Adele", "21", 2011, 10, "Lovesong", "pop", {5, 16}, "England"},
                             {"Adele", "21", 2011, 11, "Someone like you", "pop", {4, 47}, "England"},
                             {"Adele", "21", 2011, 2, "Rumour has it", "pop", {3, 43}, "England"},
                             {"Adele", "21", 2011, 3, "Turning tables", "pop", {4, 10}, "England"},
                             {"Adele", "21", 2011, 4, "Don't you remember", "pop", {4, 3}, "England"},
                             {"Adele", "21", 2011, 5, "Set fire to the rain", "pop", {4, 1}, "England"},
                             {"Adele", "21", 2011, 6, "He won't go", "pop", {4, 37}, "England"},
                             {"Adele", "21", 2011, 7, "Take it all", "pop", {3, 48}, "England"},
                             {"Adele", "21", 2011, 8, "I'll be waiting", "pop", {4, 1}, "England"},
                             {"Adele", "21", 2011, 9, "One and only", "pop", {5, 48}, "England"},
                             {"All them witches", "Dying surfer meets his maker", 2015, 1, "Call me star", "alternative,rock", {3, 54}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 2, "El centro", "alternative,rock,instrumental", {8, 25}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 3, "Dirt preachers", "alternative,rock", {3, 44}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 4, "This is where it falls apart", "alternative,rock", {7, 2}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 5, "Mellowing", "alternative,instrumental", {3, 11}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 6, "Open passageways", "alternative,rock", {3, 14}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 7, "Instrumental 2 (welcome to the caveman future)", "alternative,rock,instrumental", {2, 33}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 8, "Talisman", "alternative,rock", {6, 7}, "U.S.A."},
                             {"All them witches", "Dying surfer meets his maker", 2015, 9, "Blood and sand / milk and endless waters", "alternative,rock", {7, 20}, "U.S.A."},
                             {"The decemberists", "The tain", 2005, 1, "The tain (parts i-iv)", "progressive,experimental,folk,rock", {18, 35}, "U.S.A."},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 1, "The sun roars into view", "jazz,instrumental,experimental", {7, 37}, "U.S.A.,Canada"},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 2, "Won't be a thing to become", "jazz,instrumental,experimental", {3, 24}, "U.S.A.,Canada"},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 3, "In the vespers", "jazz,instrumental,experimental", {6, 2}, "U.S.A.,Canada"},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 4, "And still they move", "jazz,instrumental,experimental", {2, 56}, "U.S.A.,Canada"},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 5, "With the dark hug of time", "jazz,instrumental,experimental", {6, 34}, "U.S.A.,Canada"},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 6, "The rest of us", "jazz,instrumental,experimental", {6, 30}, "U.S.A.,Canada"},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 7, "Never were the way she was", "jazz,instrumental,experimental", {8, 12}, "U.S.A.,Canada"},
                             {"Colin Stetson and Sarah Neufeld", "Never were the way she was", 2015, 8, "Flight", "jazz,instrumental,experimental", {1, 38}, "U.S.A.,Canada"}

                             //? planned for today:
                             //TODO enums, structs
                             //TODO practice with this
    }