/*

For this practice project, there are 2 options
1 --> directly declare an array with dog names
2 --> read dog names from txt file with for loop and append to array

*/

//1: We need to include iostream to be able to cin cout
#include <iostream>
#include <stdlib.h>
#include<time.h>   

//2: We always need to use namespace std
using namespace std;

//the int main is the so called main function, when running code it is called first.
int main()
{ 

	string dognames[100] = 
	{	
		"Max",
		"Buddy",
		"Charlie",
		"Jack",
		"Cooper",
		"Rocky",
		"Toby",
		"Tucker",
		"Jake",
		"Bear",
		"Duke",
		"Teddy",
		"Oliver",
		"Riley",
		"Bailey",
		"Bentley",
		"Milo",
		"Buster",
		"Cody",
		"Dexter",
		"Winston",
		"Murphy",
		"Leo",
		"Lucky",
		"Oscar",
		"Louie",
		"Zeus",
		"Henry",
		"Sam",
		"Harley",
		"Baxter",
		"Gus",
		"Sammy",
		"Jackson",
		"Bruno",
		"Diesel"
		"Jax",
		"Gizmo",
		"Bandit",
		"Rusty",
		"Marley",
		"Jasper",
		"Brody",
		"Roscoe",
		"Hank",
		"Otis",
		"Bo",
		"Joey",
		"Beau",
		"Ollie",
		"Tank",
		"Shadow",
		"Peanut",
		"Hunter",
		"Scout",
		"Blue",
		"Rocco",
		"Simba",
		"Tyson",
		"Ziggy",
		"Boomer",
		"Romeo",
		"Apollo",
		"Ace",
		"Luke",
		"Rex",
		"Finn",
		"Chance",
		"Rudy",
		"Loki",
		"Moose",
		"George",
		"Samson",
		"Coco",
		"Benny",
		"Thor",
		"Rufus",
		"Prince",
		"Chester",
		"Brutus",
		"Scooter",
		"Chico",
		"Spike",
		"Gunner",
		"Sparky",
		"Mickey",
		"Kobe",
		"Chase",
		"Oreo",
		"Frankie",
		"Mac",
		"Benji",
		"Bubba",
		"Champ",
		"Brady",
		"Elvis",
		"Copper",
		"Cash",
		"Archie",
		"Walter"
	};

	int v2;
	//generates a random number between 1 and 100

	//we need a generator
	srand(time(0));

	//we make a random with use of the generator
	v2 = rand() % 100 + 1;
     
	//we want to acces the v2'th element of array dognames
	string walter = dognames[v2];

	//print the random dogname walter
	cout << "The dog name is:" << endl;
	cout << walter << endl; 

	//let the user give us 6 dog names to choose from
	//then select a random dog name from the users input

	string dognames2[6] = {}; //contains 6 elements
	//the above code contains 6 strings --> dognames[0], dognames[1], dognames[2], dognames[3], dognames[4]
	cout << endl;

	//we have filled empty array dognames2 with 6 dogs name
	cout << "Please enter a dog name" << endl;
    cin >> dognames2[0];
	cout << "Please enter another dog name" << endl;
	cin >> dognames2[1];
	cout << "Please enter another dog name" << endl;
	cin >> dognames2[2];
 	cout << "Please enter another dog name" << endl;
	cin >> dognames2[3];
	cout << "Please enter another dog name" << endl;
	cin >> dognames2[4];
	cout << "Please enter another dog name" << endl;
	cin >> dognames2[5];
	
	//TODO - iterate over the array with a for loop and print every dog name inside the array
	//x elements, declare at 0, condition < x
	/*(for (int i = 0; i < 6; i++)
	{
		cout << dognames2[i] << endl;
	}
	*/
}