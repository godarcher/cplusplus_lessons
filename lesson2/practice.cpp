//1: We need to include iostream to be able to work with files
#include <iostream>

//2: We always need to use namespace std
using namespace std;

int main()
{ 
	string my_string;

	std::cout << "Please choose a number\n";
	std::cout << "a) 9\n";
	std::cout << "b) 6\n";
	
	std::cin >> my_string; 

	{
		if (my_string == "a" || my_string == "9") {
			int my_int = 9;
			std::cout << "The answer is 3 \n";
		}
		
		else if (my_string == "6" || my_string == "b") {
            int my_int = 6;
			my_int = 6 / 1.5;
			std::cout << "The answer is 4 \n";
		}  
	} 

	system("pause");
	return 0;
}