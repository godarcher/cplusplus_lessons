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

            //TODO -- add actual encryption
        }
        else if (command == "decrypt_int")
        {
            cout << ("Please enter an int to be decrypted.");
            int input;
            cin >> input;

            //TODO -- add actual decryption
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