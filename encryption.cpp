#include <iostream>

using namespace std;

int main()
{ 
    string command;

    while (command != "exit")
    {
        cin >> command;

        if (command == "encrypt_int")
        {
            cout << ("Please enter an int to be encrypted..");
            int input;                                                                         
            cin >> input;
            input = (input + 17) * 2;
            cout << input;
        }
        else if (command == "decrypt_int")
        {
            cout << ("Please enter an int to be decrypted..");
            int input;
            cin >> input;
            input = (input / 2) - 17;
            cout << input;
        }
        else if (command == "encrypt_string")
        {
            cout << ("Please enter an string to be decrypted..");
            string input; 
            cin >> input;
            input = "dfjk" + input + "asdf";
        }
        else if (command == "decrypt_string")
        {
            cout << ("Please enter an string to be decrypted..");
        }
        else if (command == "exit")
        {
            cout << "Terminated";
        }
        else
        {
            cout << "Please enter one of the following commands: <encrypt <type>> or <decrypt <type>>";
        }
    }
}